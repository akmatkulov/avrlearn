#include <stdio.h>
#define SIZE 10
#define PAR 72

int main(void)
{
  int index, score[SIZE];
  int sum = 0;
  float average;

  printf("Enter %d results game golf: \n", SIZE);
  for (index = 0; index < SIZE; index++)
    scanf("%d", &score[index]);
  printf("Results: ");
  for (index = 0; index < SIZE; index++)
    printf("%d ", score[index]);
  printf("\n");
  for (index = 0; index < SIZE; index++)
    sum = sum + score[index];

  average = (float)sum / SIZE;

  printf("Total: %d, Average: %.2f\n", sum, average);
  printf("Полученный гандикап равен %.f.\n", average - PAR);

  return 0;
}
