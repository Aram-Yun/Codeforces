#include <iostream>
using namespace std;

int main(void) {
  int N, arr[3], cnt, ans = 0;
  cin >> N;
  for(int i = 0; i < N; i++) {
    cnt = 0;
    for(int j = 0; j < 3; j++) {
      cin >> arr[j];
      if(arr[j] == 1) cnt++;
    }
    if(cnt > 1) ans++;
  }
  cout << ans;
  return 0;
}