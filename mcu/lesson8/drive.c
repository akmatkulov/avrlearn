#define F_CPU 16000000UL
#include <avr/io.h>

int main(void)
{
  DDRD = 0xff;
  PORTD = 0x00;
  TCCR0 = 0b00000101; //1024
  TCNT0 = 0;
  while (1) {
    if (TCNT0 == 127) PORTD = 0b00001111;
    
    if (TCNT0 == 255) PORTD = 0b11110000;
  }
  return 0;
}
