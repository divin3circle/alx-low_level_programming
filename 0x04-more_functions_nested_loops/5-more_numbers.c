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
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar(10);
	}
}
