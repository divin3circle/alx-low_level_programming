#include "main.h"

/**
* string_toupper - changes all lowercase leeters of
* a string to uppercase
* @s: string whoose lowercase letters are to be
* changed
* Return: resultant str
*/
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
