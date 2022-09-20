#include <stdio.h>
#include "main.h"

/**
 * main - function that prints every other character of the string
 *
 * return: none
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
