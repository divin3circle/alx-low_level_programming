#include <stdio.h>

/**
* _islower - checks whether a charater passed is of lowercase
* @c: alphabet to be checked
*
* Return: 1 if the charater is lower and 0 if its upper
*/
int _islower(int c)
{
	int res;

	if (c >= 97 && c <= 122)
		res = 1;
	else
		res = 0;
	return (res);
}

/**
* main - calls _islower function
*
* Return: 0 always(successful)
*/
int main(void)
{
	int result;

	result = _islower('c');
	putchar(result + '0');
	putchar('\n');
	return (0);
}
