#include <stdio.h>
#include "main.h"

/**
 * main - print numbers
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int number;
	number = 0;
	
	do
	{
		_putchar(number + 0 || number + 48);
		number++;
	}

	while(number >= 0 && number <= 9);
	_putcher('\n')
}


