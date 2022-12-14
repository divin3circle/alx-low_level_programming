#include "main.h"

/**
* _abs - returns an integer's absolute value
* @n: integer whose abs value is returned
*
* Return: abs value of int n passed
*/
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
