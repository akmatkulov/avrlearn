#include <stdio.h>
#define PI 3.141593

int main(void)
{
  int number = 7;
  float pies = 12.75;
  int cost = 7800;

  printf("%d members eat %.2f pies.\n", number, pies);
  printf("PI = %f.\n", PI);
  printf("Good bye! Your Art cost very much.\n");
  printf("%c%d\n", '$', 2 * cost);

  return 0;
}
