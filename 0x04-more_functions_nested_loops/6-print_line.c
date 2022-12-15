#include "main.h"

/**
 * print_line - prints a straight line on the screen
 * @n: deterimines length of the line
 * Return: 0 always(success)
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
