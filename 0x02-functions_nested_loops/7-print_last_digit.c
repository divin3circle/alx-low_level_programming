#include "main.h"

/**
* print_last_digit - prints the last digit of an int
* @n: int whose last digit is printed
*
* Return: the last digit of the int n
*/
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (-1 * (n % 10));
		_putchar(last + '0');
	else
	{
		last = (n % 10);
		_putchar(last + '0');
	}
	return (last);
}
