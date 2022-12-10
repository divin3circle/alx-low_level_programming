#include <stdio.h>

/**
*main -> program entry, displays a four digit combo
*
* Return: always 0(success)
*/
int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar(' ');
					putchar((c % 10) +'0');
					putchar((d % 10) + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
