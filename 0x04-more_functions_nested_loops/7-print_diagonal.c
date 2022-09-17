#include <stdio.h>
#include "main.h"

/**
 * main - print a diagonal line
 *
 * return: none
 */

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; space < len; space++)
		{
			putchar(' ');
		}
	
	putchar('\\');

	if (len == (n - 1))
	{
		continue;
	}
	putchar('\n');
}
}

