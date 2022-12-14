#include "main.h"

/**
* print_times_table - prints n times table
* @n: int rep number of times to print the times table
*
* Return: void, no return value
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <+ n; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
		for (j = 0; j <= 10; j++)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
