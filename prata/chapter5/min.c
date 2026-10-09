#include <stdio.h>
#define SEC_PER_MIN 60

int main(void)
{
  int sec, min, left;
  printf("Enter seconds: ");
  scanf("%d", &sec);

  while (sec > 0) {
    min = sec / SEC_PER_MIN;
    left = sec % SEC_PER_MIN;
    printf("Minutes: %d, Seconds: %d\n", min, left);
    printf("Enter another value: ");
    scanf("%d", &sec);
  }
  printf("Done!\n");
  return 0;
}
