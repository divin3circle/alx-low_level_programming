#include <stdio.h>

/**
* main -> program entry, displays z - a
*
* Return: always 0(successful)
*/
int main(void)
{
	char c;

	/* loop in revrse */
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
