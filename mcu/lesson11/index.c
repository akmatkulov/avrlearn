/*
 * Lesson_11_2.c
 *
 * Created: 11.10.2021 21:02:54
 * Author : Дмитрий
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define  SEG7_DDR DDRD
#define  SEG7_PORT PORTD

int r1_100 = 0;
int r2_10 = 0;
int r3_1 = 0;

int z = 0;

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
	0b01101111  //9
};

void chislo (unsigned int vse_chislo)
{
	r1_100 = vse_chislo/100;    // сотни
	r2_10  = vse_chislo%100/10; // десятки
	r3_1   = vse_chislo%10;		// единицы
}


ISR(TIMER0_OVF_vect)
{
	
	//TCNT0 = 127;
	if(++z>12) z = 1;
	
	if (z == 4)
	{
    PORTB = 0b00000110;
		SEG7_PORT = digits [r1_100];// Сотни
	} 
	else if (z == 8)
	{
    PORTB = 0b00000101;
		SEG7_PORT = digits [r2_10];	// Десятки
	} 
	else if (z == 12)
	{
		PORTB = 0b00000011;
		SEG7_PORT = digits [r3_1];	// Единицы
	}
	
}

int main(void)
{
	
	SEG7_DDR = 0xff;
	SEG7_PORT = 0x00;
	
	DDRB |= (1<<2) | (1<<1) | (1<<0);
	PORTB |= (1<<2) | (1<<1) | (1<<0);
	
	TCCR0 = 0b00000010; // Делитель на 8 0-го ТС
	TCNT0 = 0;
	
	TIMSK = 0b00000001; // Разреш. прерыв при переполнении 0-го ТС
	
	sei();
	
	while (1)
	{
		chislo(531);	
	}
}

