#include "main.h"

/**
* _memcpy - copies a memory area
* @dest: pointer of the location to be pasted
* @src: pointer to source 
* @n: number of bytes to be copied
* Return: pointer to the destnination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
