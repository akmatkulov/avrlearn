#include <stdio.h>
#define SIZE 26

int main(void)
{
  char alphabet[SIZE];
  char ch = 'A';
  for (int i = 0; i < SIZE; i++)
  {
    alphabet[i] = ch++;
    printf("%c", alphabet[i]);
  }
  printf("\n");

  return 0;
}
