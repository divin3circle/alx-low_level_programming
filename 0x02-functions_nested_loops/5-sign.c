#include "main.h"

/**
* print_sign - prints signs of int passed
* @n: int whose sig is to be printed
*
* Return: 1 and + if n > 0, 0 if n is 0 and -1 and - if n < 0
*/
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else
	{
		_putchar('-');
		i = -1;
	}
	_putchar(',');
	_putchar(' ');
	return (i);
}
