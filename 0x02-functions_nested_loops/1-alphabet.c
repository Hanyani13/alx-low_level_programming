#include "main.h"
#include <stdio.h>
/**
 * main - print putcher
 * Return: always 0
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
putchar('\n');
}
