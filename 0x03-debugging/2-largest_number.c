#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: the largest int
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (a > c)
			largest = a;
		else
			largest c;
	}
	else
	{
		if (b > c)
			largest = b;
		else
			largest = c;
	}

	return (largest);
}
