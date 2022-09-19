#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints a string followed by a new line
 *
 * Return: string
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
