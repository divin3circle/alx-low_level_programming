#include <stdio.h>

/**
* _abs - returns the absolute value of the integer passed
* @c: the integer whose absolute value is to be determined
*
* Return: absolute value of the integer passed
*/
int _abs(int c)
{
	if (c < 0)
		c = -c;
	return (c);
}

/**
* print_last_digit - returns the last digit of the number passed
* @n: the number whoose last digit is to be obtained
*
* Return: the last digit of the integer passed
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	return (last);
}

/**
* main - program entry, calls _abs and print_last_digit functions
*
* Return: 0 always(successful)
*/
int main(void)
{
	int res;

	res = print_last_digit(_abs(98));
	putchar(res + '0');
	putchar('\n');
	return (0);
}
