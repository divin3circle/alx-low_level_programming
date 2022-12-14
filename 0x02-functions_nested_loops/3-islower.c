#include "main.h"

/**
* _islower - checks whether a char passed is lowercase
*@c: char to be checked
*
* Return: 1 if c is lowercase and 0 otherwise
*/
int _islower(int c)
{
	int i;

	if (c >= 90 && c <= 122)
		i = 1;
	else
		i = 0;
	return (i);
}
