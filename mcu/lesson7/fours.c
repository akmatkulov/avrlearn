#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

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
  DDRC =0b1111000;
  PORTC =0b1111000;
  DDRB = 0xff;
  PORTB =0x00;
  while (1) {
    PORTC = 0b1110000;
    PORTB = digits[3];
  }
  
  return 0;
}

