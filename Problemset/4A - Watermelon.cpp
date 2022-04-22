#include <iostream>
using namespace std;

int main(void) {
  int N;
  scanf("%d", &N);
  if(N - 2 > 0 and (N - 2) % 2 == 0) printf("YES");
  else printf("NO");
  return 0;
}
