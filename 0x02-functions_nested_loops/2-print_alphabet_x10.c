#include <stdio.h>
#include "main.h"

/**
 * a script that prints an alphabet 10 times using _putchar
 *
 * return: 0
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0, a <= 9, a++)
	{
		for (b = 97, b <= 122, b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}

