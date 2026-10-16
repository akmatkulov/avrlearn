#include <stdio.h>
#include <string.h>
int main(void)
{
  char word[10];
  printf("Enter word: ");
  scanf("%s", word);
  int size = strlen(word) - 1;

  for (int i = size; i >= 0; i--)
  {
    printf("%c", word[i]);
  }
  printf("\n");

  return 0;
}
