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
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}
	return (i);
}
