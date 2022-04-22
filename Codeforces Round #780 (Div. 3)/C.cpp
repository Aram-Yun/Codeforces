#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int t, ans;
  char tmp;
  string str;
  vector<char> arr; 
  cin >> t;
  for(int i = 0; i < t; i++) {
    ans = 0;
    cin >> str;
    for(int j = 0; j < str.length(); j++) {
      if(count(arr.begin(), arr.end(), str[j]) == 0) arr.push_back(str[j]);
      else {
        ans += arr.size() - 1;
        arr.clear();
      }
    }
    if(arr.size() == 1) ans++;
    cout << ans << '\n';
  }
  return 0;
}