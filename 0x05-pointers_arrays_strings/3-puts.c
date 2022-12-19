#include "main.h"

/**
* _puts - prints a string plus a new line in stdout
* @str: adress of string to be printed
* Return: void
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
