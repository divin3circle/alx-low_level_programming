#include "main.h"

/**
* _strncat - concatenates two str
* @dest: destination of str to be appended
* @src: the source str
* @n: no of bytes from @src to concatenate
* Return: a pointer to the resulting concatenated str
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
