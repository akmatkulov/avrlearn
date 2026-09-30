#include <stdio.h>
#include <float.h>

int main(void)
{
  float num1 = 1.0f / 3.0f;
  double num2 = 1.0 / 3.0;

  printf("Float: %.4f\nDouble: %.4f\n", num1, num2);
  printf("Float: %.12f\nDouble: %.12f\n", num1, num2);
  printf("Float: %.16f\nDouble: %.16f\n", num1, num2);
  printf("FLT_DIG: %d\nDBL_DIG: %d\n", FLT_DIG, DBL_DIG);

  return 0;
}
