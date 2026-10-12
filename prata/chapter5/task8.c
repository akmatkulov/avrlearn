#include <stdio.h>

int main(void)
{
  int first_o, second_o;
  printf("Enter second operand: ");
  scanf("%d",&second_o);
  printf("Enter first operand: ");
  scanf("%d", &first_o);

  while (first_o > 0) {
    printf("Result: %d\n", first_o % second_o);
    printf("Enter first operand: ");
    scanf("%d", &first_o);
  }
  printf("Done!\n");
  return 0;
}
