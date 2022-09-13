#include <stdio.h>
/** 
 * main print alphabet in lowercase and uppercase
 *
 * return : value 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putcher(letter);
	putcher("\n);
	return(0);
