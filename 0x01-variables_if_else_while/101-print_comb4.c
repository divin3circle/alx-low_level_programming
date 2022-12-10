#include <stdio.h>

/**
*main -> program entry, display three digit possible combo
*
* Return: always 0(succeessful)
*/
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
