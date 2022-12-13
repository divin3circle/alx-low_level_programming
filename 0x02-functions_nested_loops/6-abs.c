#include <stdio.h>

/**
* _abs - returns the absolute value of an integer passed
* @n: the integer whose absolute value is to be determined
*
* Return: the absolute value of the integer passed
*/
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

/**
* main - program entry, calls _abs fun
*
*Return: 0 always(successful)
*/
int main(void)
{
	int res;

	res = _abs(-1);
	putchar(res + '0');
	putchar('\n');
	return (0);
}
