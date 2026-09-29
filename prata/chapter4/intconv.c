#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void)
{
  short num = PAGES;
  short mnum = -PAGES;


  printf("num like short / unsigned short: %hd / %hu\n", num, num);
  printf("-num like short / unsigned short: %hd / %hu\n", mnum, mnum);
  printf("num like int / char: %d / %c\n", num, num);
  printf("WORDS like int / short / char: %d / %hd / %c\n", WORDS, WORDS, WORDS);

  return 0;
}
