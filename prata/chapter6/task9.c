#include <stdio.h>
float result(float n, float z);
int main(void)
{
  float num1, num2;
  printf("Enter num1 and num2: ");
  while(scanf("%f %f", &num1, &num2) == 2)
  {
    printf("Result: %f\n", result(num1, num2));
    printf("Try again: ");
  }

  return 0;

}

float result(float n, float z)
{
  float res = (n - z) / (n * z);
  return res;
}
