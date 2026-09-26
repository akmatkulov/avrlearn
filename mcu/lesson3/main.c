#include <avr/io.h>
#define LED PORTD

int main(void)
{
  DDRD = 0b11111111;
  DDRC = 0b0000000;
  PORTC = 0b0000101;
  while (1) {
  
    if (PINC == 0b0000001)
    {
      LED = 0b11110000;
    }
    if (PINC == 0b0000100)
    {
      LED = 0b00001111;
    }
    if (PINC == 0b0000101)
    {
      LED = 0b00000000;
    }
    if (PINC == 0b0000000)
    {
      LED = 0b11111111;
    }
  }
  return 0;
}
