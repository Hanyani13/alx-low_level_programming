#include <stdio>
#include "main.h"

/**
 * main - check whether character is digit or not
 *
 * return: 1 if it is, 0 other
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
	return (1);
	}

	return (0);
}
