#include <stdio.h>

int main(void)
{
  for (int i = 0; i < 5; i++)
  {
    for (int x = 0; x <= i; x++) 
    {
      printf("$");
    }
    printf("\n");
  }
  return 0;
}
