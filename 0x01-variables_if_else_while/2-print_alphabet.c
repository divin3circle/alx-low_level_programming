#include <stdio.h>

/**
* main -> program entry point, prints alphabes in lower case
*
* Return: Always 0(successful)
*/
int main(void)
{
	int c;

/* loops over a-z and prints results*/
	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
