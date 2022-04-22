#include <iostream>
using namespace std;

int main(void) {
  int t, n, tmp, even, odd, ans;
  cin >> t;
  for(int i = 0; i < t; i++) {
    ans = 1;
    cin >> n;
    for(int j = 0; j < n; j++) {
      cin >> tmp;
      if(j == 0) odd = tmp % 2;
      else if(j == 1) even = tmp % 2;
      else if(j % 2 == 0 and odd != tmp % 2) ans = 0;
      else if(j % 2 == 1 and even != tmp % 2) ans = 0;
    }
    if(ans) cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}