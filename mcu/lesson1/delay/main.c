#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#define MIG 1000
#define LED PORTD

int main(void)
{
  DDRD = 0b000000011;

  while (1) {
    LED = 0b00000001;
    _delay_ms(MIG);
    LED = 0b00000000;
    _delay_ms(MIG);
    LED = 0b00000010;
    _delay_ms(MIG);
    LED = 0b00000000;
    _delay_ms(MIG);
  }
}
