#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

#define SEG PORTB

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
  DDRB = 0b11111111;
  DDRC = 0b0000000;
  PORTC = 0b0000011;
  while (1) {
    if (PINC == 0b0000010)
    {
      for (int i = 0; i < 10; i++){
        SEG = digits[i];
        _delay_ms(300);
      }
    }
  

    if (PINC == 0b0000001)
    {
      for (int i = 9; i >= 0; i--) {
        SEG =digits[i];
        _delay_ms(300);
      }
    }
  }
   
}
