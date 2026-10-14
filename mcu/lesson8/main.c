#define F_CPU 1600000UL
#include <avr/io.h>
#include <util/delay.h>
int multiply(int num, int pos);

 int digits [10] = 
{
    0b00111111, //0
    0b00000110, //1
    0b01011011, //2
    0b01001111, //3
    0b01100110, //4
    0b01101101, //5
    0b01111101, //6
    0b00000111, //7
    0b01111111, //8
    0b01101111 //9
};

int main(void)
{
  DDRC = 0b0001111;
  DDRB = 0b11111111;

  while (1) {
    PORTC &= ~((1<<1) | (1<<2) | (1<<3));
    PORTC |= (1<<0);
    PORTB = digits[1];
    _delay_ms(3);

    PORTC &= ~((1<<0) | (1<<2) | (1<<3));
    PORTC |= (1<<1);
    PORTB = digits[2];
    _delay_ms(3);
    
    PORTC &= ~((1<<0) | (1<<1) | (1<<3));
    PORTC |= (1<<2);
    PORTB = digits[3];
    _delay_ms(3);
    
    PORTC &= ~((1<<0) | (1<<1) | (1<<2));
    PORTC |= (1<<3);
    PORTB = digits[4];
    _delay_ms(3);
  }

  return 0;
}


int multiply(int num, int pos) 
{
  int arrn[4];
  arrn[3] = num / 1000;
  arrn[2] = (num / 1000) / 10;
  arrn[1] = num % 1000 / 10;
  arrn[0] = num % 10;

  return arrn[pos];
}
