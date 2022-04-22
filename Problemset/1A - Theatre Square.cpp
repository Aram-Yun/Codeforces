#include <iostream>
using namespace std;

int main(void) {
  unsigned long long n, m, a;
  cin >> n >> m >> a;
  if(n > (n / a) * a) n = n / a + 1;
  else n /= a;
  if(m > (m / a) * a) m = m / a + 1;
  else m /= a;
  cout << m * n;
  return 0;
}