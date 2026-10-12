#include <stdio.h>
void cube(double x);

int main(void)
{
  double num;
  printf("Please enter number: ");
  scanf("%lf", &num);
  cube(num);
  return 0; 
}

void cube(double x)
{
  printf("Result: %.2lf\n", x * x * x);
}
