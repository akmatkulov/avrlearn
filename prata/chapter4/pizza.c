#include <stdio.h>
#define PI 3.14159

int main(void)
{
  float area, circum, radius;
  printf("Radius your pizza: ");
  scanf("%f", &radius);
  area = PI * radius * radius;
  circum = 2.0 * PI * radius;

  printf("Parameters pizza: \n");
  printf("Circum: %1.2f\nArea: %1.2f\n", circum, area);

  return 0;
}
