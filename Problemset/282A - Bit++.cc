#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, x  = 0;
  cin >> n;
  for(int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    if(s == "++X") ++x;
    else --x;
  }
  cout << x;
}