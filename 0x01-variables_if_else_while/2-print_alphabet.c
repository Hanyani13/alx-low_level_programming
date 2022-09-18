#include <stdio.h>
/** 
 * main print alphabet in lowercase and uppercase
 *
 * return : value 0
 */

int main(void)
{
	char zh = 'a';
	while (zh <= 'z')
	{
		putchar(zh); ++zh;
	}
	putchar('\n');

	return (0);
}
