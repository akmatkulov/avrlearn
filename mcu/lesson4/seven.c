#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define SEG7D PORTD
#define SEG7B PORTB

void seg_first(void);
void seg_second(void);

int main(void)
{
  DDRD = 0b11111111;
  DDRB = 0b11111111;
  DDRC = 0b0000000;
  PORTC = 0b0000011;

  while (1)
  {
    if (PINC == 0b0000010)
    {
      seg_first();
    }
    if (PINC == 0b0000001) 
    {
      seg_second();
    }
    SEG7D = 0b11111111;
    SEG7B = 0b00000000;
  }
  return 0;
}

void seg_first(void)
{
    SEG7D = ~0b00111111; // 0
    _delay_ms(300);
    SEG7D = ~0b00000110; // 1
    _delay_ms(300);
    SEG7D = ~0b01011011; // 2
    _delay_ms(300);
    SEG7D = ~0b01001111; // 3
    _delay_ms(300);
}

void seg_second(void)
{
    SEG7B = 0b00111111; // 0
    _delay_ms(300);
    SEG7B = 0b00000110; // 1
    _delay_ms(300);
    SEG7B = 0b01011011; // 2
    _delay_ms(300);
    SEG7B = 0b01001111; // 3
    _delay_ms(300);
}
