#include <stdio.h>

int main(void)
{
  int rost;

  printf("Enter your height: ");
  scanf("%d", &rost);
  printf("Height in sm: %.2f\n", rost * 2.54);

  return 0;
}
