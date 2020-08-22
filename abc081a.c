#include <stdio.h>
int main() {
  char s[3];
  int n = 0, i;

  scanf("%s", s);
  for (i = 0; i < 3; i++) {
    if (s[i] == '1') {
      n++;
    }
  }
  printf("%d", n);
  return 0;
}