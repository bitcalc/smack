#include <stdio.h>
#include <stdlib.h>
#include "smack.h"

#define MAXSIZE 10
#define RESET 0

int main() {
  int i = 0;
  int *a = (int*)malloc(MAXSIZE * sizeof(int));

  for (i = 0; i < MAXSIZE - 1; i++) {
    a[i] = RESET;
  }

  __SMACK_assert(a[5] != RESET || a[9] == RESET);

  free(a);
  return 0;
}

