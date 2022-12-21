#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: a number < 1 if s1 < s2, 0 if they
* are equal and a number > 1 if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
