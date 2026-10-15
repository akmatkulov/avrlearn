#include <stdio.h>

int main(void)
{
  int secret = 22;
  int code;
  do {
    printf("Enter code: ");
    scanf("%d", &code);
  } while (code != secret);

  printf("Good job\n");
  return 0;
}
