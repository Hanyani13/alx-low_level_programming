#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet and a new line
 *
 * Return: always 0
 */

int main()
{
	char lower = 'a';
	while (lower <= 'z')
		if (lower == 'e' || lower == 'q')
		{
			++lower;
			putchar(lower);
			++lower;
		}

	putchar('\n');

	return (0);
}
