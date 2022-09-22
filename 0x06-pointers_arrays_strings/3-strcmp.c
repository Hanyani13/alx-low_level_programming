#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * a function that copies two strings
 *
 * Return: none
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
