#include <stdio.h>
int main() {
  int abc[3], n, max = 0, i = 0, ans;
  for (i = 0; i < 3; i++) {
    scanf("%d", &abc[i]);
    if (max < abc[i]) {
      max = abc[i];
      n = i;
    }
  }
  ans = max * 10;
  for (i = 0; i < 3; i++) {
    ans += abc[i];
  }
  ans -= abc[n];
  printf("%d", ans);
}