#include <stdio.h>
#include "main.h"

/**
 * main - parameters are passed by value
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 402;

	reset_to_98(&n);
	{
		putchar('n');
	}

	return (0);
}
