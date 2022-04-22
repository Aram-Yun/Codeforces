#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t, tmp;
  cin >> t;
  for(int i = 0; i < t; i++)  {
    cin >> tmp;
    if(tmp < 1400) cout << "Division 4" << '\n';
    else if(tmp < 1600) cout << "Division 3" << '\n';
    else if(tmp < 1900) cout << "Division 2" << '\n';
    else cout << "Division 1" << '\n';
  }
  return 0;
}