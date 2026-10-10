#include <stdio.h>
void pound(int n);

int main(void)
{
  int num;

  printf("Enter size: ");
  scanf("%d", &num);
  pound(num);

  return 0;
}

void pound(int n)
{
  while (n-- > 0)
    printf("#");
  printf("\n");
}
