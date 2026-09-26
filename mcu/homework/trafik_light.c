#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#define LED PORTC
#define BTN PORTD

int main(void)
{
  DDRC = 0b0111111;
  DDRD = 0b00000000;
  BTN = 0b11001000;

  while (1) {
    if (PIND == 0b11000000)
    {
      LED = 0b0110000;
    }
    if (PIND == 0b10001000)
    {
      LED = 0b0001100;
    }
    if (PIND == 0b01001000)
    {
      LED = 0b0000011;
    }
    if (PIND == 0b11001000)
    {
      LED = 0b0000000;
    }
  }
  return 0;
}
