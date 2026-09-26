#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void)
{
  int first = INT_MAX;
  float second = FLT_MAX;

  printf("%d\n", first + 100);
  printf("%f\n", second + 100.222);

  return 0;
}
