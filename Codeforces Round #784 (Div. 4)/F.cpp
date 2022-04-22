#include <iostream>
using namespace std;

int main(void) {
  int t, n, arr[200'000];
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> n;
    int suml, sumr, cnt = 0;
    for(int j = 0; j < n; j++) cin >> arr[j];
    int x = 0, y = n - 1, mid = n / 2;
    suml = arr[x], sumr = arr[y];
    while(x <= mid and mid < y) {
      if(suml < sumr) {
        suml += arr[x++];
        cnt++;
      }
      else if(suml > sumr) {
        sumr += arr[y--];
        cnt++;
      }
      else if (suml == sumr) {
        if(arr[x] < arr[y]) {
          suml += arr[x++];
          cnt++;
        }
        else {
          sumr += arr[y--];
          cnt++;
        }
      }
    }
    cout << cnt << '\n';
  }
  return 0;
}