#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#define Z 300

#define LED PORTD
#define BUTTON PORTB


int main(void)
{
  DDRB = 0b00000000;
  DDRD = 0b11111111;
  LED = 0b00000000;
  BUTTON = 0b11111111;

  while (1) {
    if (PINB == 0b11111110)
    {
      LED = 0b11111111;
      _delay_ms(Z);
      LED = 0b00000000;
      _delay_ms(Z);
    }
    else 
    {
      LED = 0b00000000;
    }

    if (PINB == 0b11111101)
    {
      LED = 0b00000001;
      _delay_ms(Z);
      LED = 0b00000011;
      _delay_ms(Z);
      LED = 0b00000111;
      _delay_ms(Z);
      LED = 0b00001111;
      _delay_ms(Z);
      LED = 0b00011111;
      _delay_ms(Z);
      LED = 0b00111111;
      _delay_ms(Z);
      LED = 0b01111111;
      _delay_ms(Z);
      LED = 0b11111111;
      _delay_ms(Z);
    }
    else 
    {
      LED = 0b00000000;
    }
  }

}
