#include <iostream>
#include <map>
using namespace std;

int main(void) {
  int t, n, tmp, no;
  map<int, int> ans;
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> n;
    no = 1;
    ans.clear();
    for(int j = 0; j < n; j++) {
      cin >> tmp;
      ans[tmp]++;
    }
    for (auto iter = ans.begin(); iter != ans.end(); ++iter) {
      if(iter->second > 2) {
          cout << iter->first << '\n';
          no = 0;
          break; 
      }
    }
    if(no == 1) cout << -1 << '\n';
  }
  return 0;
}