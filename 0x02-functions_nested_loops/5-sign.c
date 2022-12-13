#include <stdio.h>
/**
* print_sign - checks whether a number is positiv, 0 or
* negative and prints the sign
* @n: the number to bechecked
*
* Return: 1 if the number is postive, o if its is 0
* and -1 if it is negative
*/
int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		putchar('+');
		res = 1;
	}
	else if (n == 0)
	{
		putchar('0');
		res = 0;
	}
	else
	{
		putchar('-');
		res = -1;
	}
	return (res);
}

/**
* main - pogram entry, calls print_sign fun
*
* Return: 0 always(successful)
*/
int main(void)
{
	int result;

	result = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(result + '0');
	putchar('\n');
	return (0);
}

