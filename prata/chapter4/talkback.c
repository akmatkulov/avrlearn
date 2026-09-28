#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main(void)
{
  float weight, volume;
  int size, letters;
  char name[40];

  printf("Hello! What's your name: ");
  scanf("%s", name);
  printf("%s your weight: ", name);
  scanf("%f", &weight);
  size  = sizeof(name);
  letters = strlen(name);
  volume = weight / DENSITY;

  printf("Ok, %s your volume: %2.2f cube fut\n", name, volume);
  printf("Your name letters: %d\n", letters);
  printf("Memory name: %d\n", size);

  return 0;
}
