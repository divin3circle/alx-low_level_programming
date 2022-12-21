#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: a pointer pointing to the string to be concatenate upon
* @src: the source string pointer
* Return: a pointer to the destnation string
*/


char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (*(dest + index) != '\0')
	{
		index++;
	}

	while (dest_len >= 0)
	{
		*(dest + index) = *(src + dest_len);
		if (*(src + dest_len) == '\0')
			break;
		index++;
		dest_len++;
	}
	return (dest);
}
