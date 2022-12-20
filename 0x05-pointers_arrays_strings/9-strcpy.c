#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies the string pointed to by src
* including the terminating null byte to the buffer
* pointed by dest
* @dest: destination
* @src: the source
* Return: a pointe to dest
*/
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (c > 0)
	{
		*(dest + c) = *(src + c);
		if (*(src + c) == '\0')
			break;
		c++;
	}
	return (dest);
}
