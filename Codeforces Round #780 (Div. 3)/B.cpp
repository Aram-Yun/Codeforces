#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t, arr[200'000], n, max, maxn, ans;
  cin >> t;
  for(int i = 0; i < t; i++) {
    ans = 0, max = 0;
    cin >> n;
    for(int j = 0; j < n; j++) {
      cin >> arr[j];
      if(max < arr[j]){
        max = arr[j];
        maxn = j;
      }
    }
    for(int j = 0; j < n; j++) {
      if(j == maxn) continue;
      arr[j] -= max - 2;
      if(arr[j] > 0) ans = 1;
    }
    if(n == 1 and arr[0] == 1) ans = 1;
    if(ans) cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}