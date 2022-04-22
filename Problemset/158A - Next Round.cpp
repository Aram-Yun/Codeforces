#include <iostream>
using namespace std;

int main(void) {
  int n, k, K, tmp, cnt = 0;
  cin >> n >> k;
  for(int i = 0; i < n; i++) {
    cin >> tmp;
    if(i == k - 1) K = tmp;
    if(i > k - 1 and tmp < K) break;
    if(tmp != 0) cnt++;
  }
  cout << cnt;
  return 0;
}