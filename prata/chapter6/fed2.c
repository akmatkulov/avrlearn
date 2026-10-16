#include <stdio.h>

int main(void)
{
  char ch = 'F';
  int x;
  for (int i = 0; i < 6; i++)
  {
    for (x = 0; x <= i; x++)
    {
      printf("%c", ch--);
    }
    ch = 'F';
    printf("\n");
  }
  return 0;
}
