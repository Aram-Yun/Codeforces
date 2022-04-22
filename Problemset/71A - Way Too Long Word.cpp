#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  string arr[100], ans[100];
  cin >> N;
  for(int i = 0; i < N; i++) {
    cin >> arr[i];
    if(arr[i].length() > 10) cout << arr[i].front() << arr[i].length() - 2 << arr[i].back() << endl;
    else cout << arr[i] << endl;
  }
  return 0;
}