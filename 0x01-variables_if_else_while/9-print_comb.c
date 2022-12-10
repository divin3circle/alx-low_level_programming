#include <stdio.h>

/**
*main -> program entry, all combos of a single digit no
*
*Return: always 0(success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n != 9)
		{
			putchar(',');
		}
		else
		{
			break;
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
