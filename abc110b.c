#include <stdio.h>
int main() {
  int set[4], i;

  for (i = 0; i < 4; i++) {
    scanf("%d", &set[i]);
  }

  int X[set[0]], Y[set[1]], Z = set[3] - set[2];

  for (i = 0; i < set[0]; i++) {
    scanf("%d", &X[i]);
  }
  for (i = 0; i < set[1]; i++) {
    scanf("%d", &Y[i]);
  }

  int znum = set[2], xfl, yfl, flag = 0, j;

  for (i = 0; i < Z; i++) {
    znum++;
    xfl = 0;
    yfl = 0;

    for (j = 0; j < set[0]; j++) {
      if (znum > X[j]) {
        xfl++;
      }
    }
    for (j = 0; j < set[1]; j++) {
      if (znum <= Y[j]) {
        yfl++;
      }
    }

    if (xfl == set[0] && yfl == set[1]) {
      flag++;
    }
  }

  if (flag > 0) {
    printf("No War");
  } else {
    printf("War");
  }
}