#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
  DDRD = 0b11111111;
  

  while (1) {
    /* PORTD = 0b11100000;
    _delay_ms(1500);
    PORTD = PORTD | 0b10100011;
    _delay_ms(1500); */

    /* PORTD = 0b11100000;
    _delay_ms(1500);
    PORTD = PORTD & 0b10100011;
    _delay_ms(1500); */

    /* PORTD = 0b01110101;
    _delay_ms(1500);
    PORTD = PORTD ^ 0b11101100;
    _delay_ms(1500); */

    /*PORTD = 0b11110000;
    _delay_ms(1500);
    PORTD = ~PORTD;
    _delay_ms(1500);*/ 

    /* PORTD = 0b11100000;
    _delay_ms(1500);
    PORTD = PORTD >> 7;
    _delay_ms(1500); */ 

    /* PORTD = 0b11100000;
    _delay_ms(1500);
    PORTD = PORTD << 3;
    _delay_ms(1500); */

    // PORTD = 0b11100000;
    //_delay_ms(1500);
    // PORTD = PORTD | 0b0000010;
    // PORTD |= 0b0000010;
    //PORTD |= (1<<2) | (1<<1) | (1<<0);
    //PORTD |= 2;
    // PORTD &= ~(1<<6);
    //PORTD &= ~((1<<7) | (1<<5));
    PORTD ^= (1<<0);
    _delay_ms(300);
    

  }

  return 0;

}


