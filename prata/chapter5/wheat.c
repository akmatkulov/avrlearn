#include <stdio.h>
#define SQUARES 64

int main(void)
{
  long double x = 1;
  double kg;
  int step = 1;
  while (step <= SQUARES)
  {
    x = x + x;
    printf("%d --- %Lf --- %Lf kgs.\n", step, x, x / 30000);
    step += 1;
  }

  return 0;
}

