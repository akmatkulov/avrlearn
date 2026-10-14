#define F_CPU 16000000UL
#include <avr/io.h>
int counter = 0;
int main(void)
{
  DDRD = 0xff;
  PORTD = 0x00;
  TCCR2 |= (1<<CS22) | (1<<CS21) | (1<<CS20);
  TCNT2 = 0;
  while (1) {
    
    if (TCNT2 == 255) {
      TCNT2 = 0;
      counter++;
    }
    if (counter == 1) {
      PORTD = 0b11110000;
    }
    if (counter == 2)
    {
      counter = 0;
      PORTD = 0b00001111;
    }

  }
  return 0;
}
