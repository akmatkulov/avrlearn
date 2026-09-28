#include <stdio.h>
#define PRAISE "Your Goodman"

int main(void)
{
  char name[40];
  printf("Enter name: ");
  scanf("%s", name);
  printf("Hello, %s. %s\n", name, PRAISE);

  return 0;
}
