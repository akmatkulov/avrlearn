#include <stdio.h>

int main(void)
{
  float weight, value;

  printf("Хотите узнать свой вес в платиновом эквиваленте?\n");
  printf("Давайте посчитаем.\n");
  printf("Enter your weight: ");
  scanf("%f", &weight);
  
  value = 1700.0 * (weight * 2.2046) * 14.5833;

  printf("Your platina weight: $%.2f.\n", value);
  return 0;
}
