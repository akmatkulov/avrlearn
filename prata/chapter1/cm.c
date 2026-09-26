#include <stdio.h>

int main(void)
{
  float duim;
  float total;
  printf("Enter duim: \n");
  scanf("%f", &duim);
  total = duim * 2.54;
  printf("Cm: %f", total);

  return 0;
}
