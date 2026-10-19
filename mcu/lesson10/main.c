#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#define SEG PORTB

int digits [10] = 
{
  0b00111111, // 0
  0b00000110, // 1
  0b01011011, // 2
  0b01001111, // 3
  0b01100110, // 4
  0b01101101, // 5
  0b01111101, // 6
  0b00000111, // 7
  0b01111111, // 8
  0b01101111 // 9
};

ISR(INT0_vect)
{
  SEG = digits[9];
  _delay_ms(2555);
}


int main(void)
{
  DDRB = 0b11111111;
  DDRC = 0b0000000;
  DDRD = 0b00000000;
  PORTC = 0b1000000;
  PORTD = 0b0001100;

  MCUCR |= (1<<ISC01);
  MCUCR &= ~(1<<ISC00);
  GICR |= (1<<INT0);
  SREG |= (1<<7);
  sei();
  
  int set = 0;

  while (1) 
  {
      _delay_ms(300);
      set++;
      if (set > 8) set = 0;
      SEG = digits[set];
  }
  return 0;
}
