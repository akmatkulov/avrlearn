#include <avr/io.h>

int main(void)
{
  DDRB = 0b00000000;
  while (1) {
    PORTB = 0b00001000;
  }
}
