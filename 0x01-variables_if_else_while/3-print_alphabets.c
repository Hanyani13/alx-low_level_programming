#include <stdio.h>
#include <stdlib.h>

/**
 * main - print lowecase and uppercase alphabets
 *
 * return: always 0
 */

int main()
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		++lower;
	}

	while (upper <= 'A')
	{
		putchar(upper);
		++upper;
	}

	putchar('\n');

	return (0);
}
