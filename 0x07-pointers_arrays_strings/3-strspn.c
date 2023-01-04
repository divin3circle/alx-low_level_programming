#include "main.h"

/**
* _strspn - gets the leght of a prefixing substring
* @s: initial segment
* @accept: pointer to sourc
* Return: number of bytes in the initial segement
* s which consists only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;

		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
