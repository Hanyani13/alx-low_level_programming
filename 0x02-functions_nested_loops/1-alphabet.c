#include "main.h"
#include <stdio.h>
/**
 * main - print putcher
 * Return: always 0
 */

void print_alphabet(void);
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	putchar('\n');
}

