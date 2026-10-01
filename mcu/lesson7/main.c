#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB &= ~(1<<3);
  PORTB |= ~(1<<3);

  DDRB |= (1<<7);
  PORTB &= ~(1<<7);

  while (1) {
    //if (~PINB&(1<<3))
    if (PINB&(1<<3))
    {
      PORTB ^= (1<<7);
      _delay_ms(300);
    }
  }

  return 0;
}
