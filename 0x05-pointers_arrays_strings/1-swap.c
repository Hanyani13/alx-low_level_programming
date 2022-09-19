#include "main.h"

/**
 * main - swap the values of two integers
 *@integer a
 @integer b

 * Return: none
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}


