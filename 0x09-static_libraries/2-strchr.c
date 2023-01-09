#include "main.h"

/**
* _strchr - locates a charcter in a string
* @s: pointer to the string
* @c: charcter to be located
* Return: pointer to the first occurence of c
* or NULL if the charcter is missing
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
