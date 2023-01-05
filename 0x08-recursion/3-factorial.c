#include "main.h"

/**
* factorial - return the factorial of a given int
* @n: int whoose factorial is to be determined
* Return: factorial of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
