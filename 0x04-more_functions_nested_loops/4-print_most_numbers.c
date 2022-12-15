#include "main.h"

/**
 * print_most_numbers - prints digits 0-9 execpt 2 and 4
 *
 * Return: 0 always(success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 4 || i == 2)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
