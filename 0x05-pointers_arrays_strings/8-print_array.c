#include <stdio.h>
#include "main.h"

/**
 * void - print_array
 *
 * return: none
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
		{
			printf("%d, ", a[inc]);
		}
	else
	{
		printf("%d", a[inc]);
	}

	putchar(10);
	}
	putchar('\n');
}

