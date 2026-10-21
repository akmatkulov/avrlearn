#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#define LEDD PORTD
#define LEDC PORTC

ISR(TIMER1_OVF_vect)
{
  LEDC ^= (1<<0); 
}

int main(void)
{
  DDRD = 0b11111111;
  DDRC = 0b0000001;

  LEDD = 0b00000000;
  LEDC = 0b0000000;
  TCCR1B = 0b00000101; //clk1024  == 4.2 second
  TCNT1 = 0;
  TIMSK |= (1<<TOIE1); //Access overflow for 1 TimerCounter
  sei(); // Turn ON  global iterrupt
  while (1) 
  {
    
    LEDD = 0b00000000;
    _delay_ms(300);
    LEDD = 0b00000001;
    _delay_ms(300);
    LEDD = 0b00000011;
    _delay_ms(300);
    LEDD = 0b00000111;
    _delay_ms(300);
    LEDD = 0b00001111;
    _delay_ms(300);
    LEDD = 0b00011111;
    _delay_ms(300);
    LEDD = 0b00111111;
    _delay_ms(300);
    LEDD = 0b01111111;
    _delay_ms(300);
    LEDD = 0b11111111;
    _delay_ms(300);

  }
  return 0;
}
