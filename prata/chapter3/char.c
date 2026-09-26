#include <stdio.h>

int main(void)
{
  char ch;
  printf("Enter char: ");
  scanf("%c", &ch);
  printf("Your char: %c ---- Code: %d (in ASCII)\n", ch, ch);

  return 0;
}
