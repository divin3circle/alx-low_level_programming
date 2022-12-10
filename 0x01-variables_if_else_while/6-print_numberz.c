#include <stdio.h>

/**
* main -> program entry, displays numbers 0-9
*
* Return: always 0(successful
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);
}
