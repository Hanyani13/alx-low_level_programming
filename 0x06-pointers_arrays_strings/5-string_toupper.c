#include "main.h"
#include <stdio.h>

/**
 * main - changes all lowercase characters
 *
 * Return: a pointer
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
			
			str[index]++;
	}

	return (str);
}
