#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<string, long long> same;
string arr[100'000];
map<char, long long> f, s;

int main(void) {
  long long n, t;
  cin >> t;
  while(t--) {
    cin >> n;
    long long ans = 0, sum = 0;
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
      same[arr[i]] = -1;
      f[arr[i][0]] = -1;
      s[arr[i][1]] = -1;
    }
    for(int i = 0; i < n; i++) sum += ++same[arr[i]];
    for(int i = n - 1; i >= 0; i--) {
      f[arr[i][0]]++, s[arr[i][1]]++;
      ans += f[arr[i][0]] + s[arr[i][1]];
    }
    ans -= sum * 2;

    cout << ans << endl;
  }
  return 0;
}