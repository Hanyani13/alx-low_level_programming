#include <stdio.h>
#include "main.h"

/**
 * main - a function that returns the length of a string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
