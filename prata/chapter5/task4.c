#include <stdio.h>
#define INCH 2.54
#define FOOT 30.48

int main(void)
{
  float cm, all_inch_n, inch_n;
  int foot_n; 
  printf("Please enter centimeters: ");
  scanf("%f", &cm);
  
  while (cm > 0) {
    foot_n = cm / FOOT;
    all_inch_n = cm / INCH;
    inch_n = all_inch_n - (foot_n * 12);

    printf("Centimeters: %.2f, Foots: %d, Inches: %.1f\n", cm, foot_n, inch_n);
    printf("Please enter another value: ");
    scanf("%f", &cm);
  }

  return 0;
}
