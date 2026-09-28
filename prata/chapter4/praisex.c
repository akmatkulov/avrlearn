#include <stdio.h>
#include <string.h>

#define PRAISE "You GOODMAN!"

int main(void)
{
  char name[40];

  printf("Enter name: ");
  scanf("%s", name);
  printf("Hello, %s. %s\n", name, PRAISE);
  printf("Your name %zd chars, and %zd bytes.\n", strlen(name), sizeof(name));
  printf("PRAISE %zd chars, and %zd bytes.\n", strlen(PRAISE), sizeof(PRAISE));

  return 0;
}
