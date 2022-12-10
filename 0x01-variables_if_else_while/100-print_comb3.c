#include <stdio.h>

/* main -> program entry, displays all combinaions of
* numbers that can be made by two digits
*
* Return: always 0(success)
*/
int main(void)
{
	int i;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x<= 9; x++)
		{
			if (x == i)
				continue;
			putchar((i % 10) + '0');
			putchar((x % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
