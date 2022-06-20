#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main(void) {
  fastio;
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto& x : v) cin >> x;
    sort(all(v));
    int flag = 1;
    for(int i = 0, cnt = 1; i < n - 1; ++i) {
      if(v[i] == v[i + 1]) {
        ++cnt;
        if(cnt == 3) {cout << v[i] << endl; flag = 0; break;}
      }
      else cnt = 0;
    }
    if(flag) cout << -1 << endl;
  }
}