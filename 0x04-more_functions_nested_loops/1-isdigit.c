#include "main.h"

/**
 * _isdigit - checks whether the passed integer is a digit 0-9
 * @c: the integer beign checked
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
