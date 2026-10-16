#include <stdio.h>

int main(void)
{
  char ch = 'A';
  for (int i = 0; i < 6; i++)
  {
    for (int x = 0; x <= i; x++)
    {
      printf("%c", ch++);
    }
    printf("\n");
  }
  return 0;
}
