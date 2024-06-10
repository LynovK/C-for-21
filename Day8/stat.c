#include <stdio.h>

int x, y, z;
int max, min;

void maxmin(int prob1, int prob2, int prob3, int *max, int *min);

/* Find max & min probabilities */
int main() {
  scanf("%d %d %d", &x, &y, &z);

  maxmin(x, y, z, &max, &min);

  printf("%d %d\n", max, min);

  return 0;
}

/* This function should be kept !!! (Your AI) */
/* But errors & bugs should be fixed         */
void maxmin(int prob1, int prob2, int prob3, int *max, int *min) {
  *max = *min = prob1;

  if (prob2 > *max)
    *max = prob2;
  if (prob2 < *min)
    *min = prob2;

  if (prob3 > *max)
    *max = prob3;
  if (prob3 < *min)
    *min = prob3;
}
