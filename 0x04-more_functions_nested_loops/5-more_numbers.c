#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: 0 always(success)
 */

void more_numbers(void)
{
	int i, a;

	for (a = 0; a <= 10; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
