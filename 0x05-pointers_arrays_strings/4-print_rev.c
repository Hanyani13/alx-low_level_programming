#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - print a string in reverse followed by a newline
 *
 * return: char
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
		putchar(10);
		putchar('\n')
}
}
