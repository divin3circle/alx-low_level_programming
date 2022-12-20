#include "main.h"

/**
* puts_half - prints the last half of a string
* @str: string to be printed
* Description: if odd no. of char, print (lenght -1) / 2
* Return: void
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
