#include <stdio.h>
#include <stdlib.h>
#include "smack.h"

// @expect error
// @checkbpl grep "call foo"
// @checkout grep -v "checking-fail-out.c(10,1)"

void foo(void) {

}

int main(void) {
  foo();
  assert(0);
  return 0;
}
