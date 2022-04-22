#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<char> arr;

int count(char a) {
  int cnt = 0;
  for(int i = 0; i < arr.size(); i++) if(arr[i] == a) cnt++;
  return cnt;
}

int main(void) {
  int t, n;
  string tmp;
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> n;
    cin >> tmp;
    arr.clear();
    int ans = 1;
    for(int j = 0; j < n; j++) {
      if(tmp[j] == 'W') {
        if(count('R') == 0 and count('B') > 0 or count('R') > 0 and count('B') == 0) {
          ans = 0;
          break;
        }
        else arr.clear();
      }
      else if(tmp[j] == 'R') {
        if(j == n - 1 and count('B') == 0) ans = 0;
        arr.push_back(tmp[j]);
      }
      else if(tmp[j] == 'B') {
        if(j == n - 1 and count('R') == 0) ans = 0;
        arr.push_back(tmp[j]);
      }
    }
    if(ans) cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}