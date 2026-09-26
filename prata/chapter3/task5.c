#include <stdio.h>

int main(void)
{
  float sec = 3.156e7f;
  int age;

  printf("Enter age: ");
  scanf("%d", &age);
  printf("Your age in seconds: %.0f\n", age * sec);

  return 0;
}
