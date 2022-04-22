#include <iostream>
using namespace std;

int main(void) {
  long long t, a, b, s;
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> a >> b;
    if(a != 0) cout << a + b * 2 + 1 << '\n';
    else cout << 1 << '\n';
  }
  return 0;
}