#include <stdio.h>

/**
* _isalpha - checks whether a charcter is an alphabet
* @c: the charcter to be checked
*
* Return: 1 if the character is an alphabet and 0
* if otherwise
*/
int _isalpha(int c)
{
	int res;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		res = 1;
	else
		res = 0;
	return (res);
}

/**
* main - program entry, call _isalpha fun
*
* Return: 0 always(successful)
*/
int main(void)
{
	int result;

	result = _isalpha('c');
	putchar(result + '0');
	putchar('\n');
	return (0);
}
