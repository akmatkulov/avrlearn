#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

#define MIG 300
#define LED_ON PORTC = 0b0010000
#define LED_OFF PORTC = 0b0000000
int main(void)
{
  DDRC = 0b0010001;

  while (1) {
    LED_ON;
    _delay_ms(MIG);
    LED_OFF;
    _delay_ms(MIG);
  }
    
  return 0;
}
