#include "main.h"
/**
* print_alphabet - prints all alphabets in lowercase
*
* Return: 0 always(success)
*/
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
