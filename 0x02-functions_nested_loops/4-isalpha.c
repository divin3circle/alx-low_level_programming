#include "main.h"

/**
* _isalpha - checks char passed is an alphabet or not
* @c: char to be checked
*
* Return: 1 if char passed is an alphabet and 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
