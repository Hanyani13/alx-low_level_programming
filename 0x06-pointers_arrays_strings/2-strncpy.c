#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * Write a function that copies a string
 *
 * return: none
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i < n, i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

