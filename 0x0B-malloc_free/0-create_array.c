#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars
* and initializes it with a specific char
* @size: size of the array
* @c: char the array will be init to
* Return: a pointer ti the array, NULL if it
* fails or  NULL if  size == 0
*/
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *charptr;

	if (size == 0);
		return (NULL);

	charptr = malloc(sizeof(c) * size);
	if (charptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		charptr[i] = c;
	return (charptr);
}
