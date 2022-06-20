#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int x, y, n;
  for(int i = 0; i < 25; ++i) {
    int tmp;
    cin >> tmp;
    if(tmp) {n = i; break;}
  }
  x = n / 5, y = n % 5;
  cout << abs(x - 2) + abs(y - 2);
}