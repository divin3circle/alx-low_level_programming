#include "main.h"

/**
* _memset - fills a memory with constant byte
* @s: memory area to be filled
* @b: constant byte to be filled in
* @n: number of bytes to be filled
* Return: a pointer s to the destination
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + 1) = b;
	return (s);
}
