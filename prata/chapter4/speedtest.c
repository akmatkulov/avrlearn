#include <stdio.h>

int main(void)
{
  float speed, size, time;

  printf("Enter file size and speed dowland: ");
  if (scanf("%f %f", &size, &speed) != 2) {
    return 1;
  }
  
  time = (size * 8) / speed;

  printf("Speed dowland: %.2f Mbit/sec\nSize file: %.2f Mbyte\nTime dowland: %.2f Seconds\n", speed, size, time);

  return 0;

}
