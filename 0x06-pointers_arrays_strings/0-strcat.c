#include "main.h"

/**
* _strcat - concatenates the string pointed by @src including the terminating
* null byte, to the end of the string pointed by @dest.
* @dest: a pointer pointing to the string to be concaatenated upon
* @src: the source string pointer
*
* Return: a pointer to the destnation string
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
