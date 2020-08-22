#include <stdio.h>
int main() {
  int abc[3], i, n;
  char s[100];
  for (i = 0; i < 3; i++) {
    scanf("%d", &abc[i]);
    n += abc[i];
  }
  scanf("%s", s);
  printf("%d %s", n, s);
  return 0;
}