#include "main"
/**
* main - prints all alphabets in lowercase
*
* Return: 0 always(success)
*/
void _print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	putchar('\n');
	return (0);
}
