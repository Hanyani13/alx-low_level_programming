#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - a function that reverses a string
 *
 * return: none
 */

void rev_string(char *s)
{
	int l, i;
	char ch;

	for (l = 0, s[1] != '\0', 1++)
	{
		for (i = 0, i < 1 / 2, i++)
		{
			char = s[1];
			s[1] = s[1 - l - i];
			s[1 - l - i] = ch;
		}
	}
}
