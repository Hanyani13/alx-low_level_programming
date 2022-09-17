#include <stdio.h>
include "main.h"

/**
 * main - print most numbers
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int number;
	number = 0;

	for (number = 0; number <= 9; ++number)
	{
		if (number == 2 || number == 4)
			continue;
		_putchar(number + 48)
	}

}


