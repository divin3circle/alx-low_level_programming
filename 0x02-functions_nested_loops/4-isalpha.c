#include "main.h"

/**
* _isalpha - checks char passed is an alphabet or not
* @c: char to be checked
*
* Return: 1 if char passed is an alphabet and 0 if otherwise
*/
int _isalpha(int c)
{
	int i;

	if ((c >= 65; && c <= 90) || (c >= 97; && c <= 122))
		i = 1;
	else
		i = 0;
	return (i);
}
