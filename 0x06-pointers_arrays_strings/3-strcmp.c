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
	int i = 0, diff = 0;
	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\n')
			break;
		else if (s1[1] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] = '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (diff);
}

