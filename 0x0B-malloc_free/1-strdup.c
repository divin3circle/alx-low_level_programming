#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly
* allocated space in memory, which contains a copy
* of the string given as a parameter
* @str: poibter to string being passed
* Return: pointer to the memmory space
* with the duplicate
*/
char *_strdup(char *str)
{
	char *ptrarr;
	int count = 0;
	int size;
	int i = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	size = count + 1;

	ptrarr = malloc(size * sizeof(char));
	if (ptrarr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		ptrarr[i] = str[i];
	}
	ptrarr[size] = '\0';
	return (ptrarr);
}
