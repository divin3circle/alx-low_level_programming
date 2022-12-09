#include <stdio.h>

/**
* main -> program entry, displays chacters from a-z in lowercase thenin uppercase
*
* Return: always 0(success)
*/
int main(void)
{
	int c;
	int C;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
