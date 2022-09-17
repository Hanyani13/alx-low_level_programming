#include <stdio.h>
include "main.h"

void more_numbers(void)
{
	int n1; n2;
	for (n1 = 0; n1 < 10; n++)
	{
		if (n2 > 9)
		{
			putchar((n2 / 10) + '0'');
		}
		putchar((n2 % 10) + '0');
	}
	putchar(10);
}
