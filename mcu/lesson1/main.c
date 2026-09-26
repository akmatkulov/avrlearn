#define F_CPU 1000000UL
#include <avr/io.h> // Подключение файла
#include <util/delay.h>

int main(void)
{
  DDRB = 0b00000010;

  while (1) {
    PORTB = 0b00000010; // Установка 5В на Вызод PC0
    _delay_ms(10000);
    PORTB = 0b00000000;
    _delay_ms(10000);
  }
}
