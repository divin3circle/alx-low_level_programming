#include "main.h"

/**
* _strlen - returns length of a string passed
* @s: the address of the string to be checked
* Return: the length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
