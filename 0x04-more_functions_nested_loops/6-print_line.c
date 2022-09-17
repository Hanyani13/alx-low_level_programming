#include <stdio.h>
#include "main.h"

/** 
 * main - prints a straight line
 *
 * return: none
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
