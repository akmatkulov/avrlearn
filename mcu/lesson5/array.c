#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

#define SEG PORTB

int digits [10] = 
{
  0b11000000, // 0
  0b11111001, // 1
  0b10100100, // 2
  0b10110000, // 3
  0b10011001, // 4
  0b10010010, // 5
  0b10000010, // 6
  0b11111000, // 7
  0b10000000, // 8
  0b10010000 // 9
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
        _delay_ms(100);
      }
    }
  

    if (PINC == 0b0000001)
    {
      for (int i = 9; i >= 0; i--) {
        SEG =digits[i];
        _delay_ms(100);
      }
    }
  }
   
}
