#define F_CPU 16000000UL
#include <avr/io.h>

int z = 0;

int main(void)
{
  DDRB = 0b11111111;
  PORTB = 0b00000000;
  
  TCCR0 = 0b00000101;
  TCNT0 = 0; //255
  while (1) {

    if (TCNT0 == 255)
    {
      z++;
      TCNT0 = 0;
    }
    if (z == 20)
    {
      PORTB = 0b00001111;
    }
    if (z == 40)
    {
      PORTB = 0b11110000;

    }

    if (z > 40)
    {
      z = 0;

    }

  }
}
