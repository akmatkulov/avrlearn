#include <stdio.h>

int main(void)
{
  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  int prefix = 10;
  while (prefix-- >= 0 )
    printf("%d ", num++);
  printf("Done!\n");

  return 0;
}
