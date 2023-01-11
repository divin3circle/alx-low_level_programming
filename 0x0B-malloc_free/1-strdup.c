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
	int str_len;
	int count = 0;
	int size;

	while (str[count] != '\0')
	{
		count++;
	}

	size = count + 1;

	ptrarr = malloc(size);

	for (int i = 0; str[i] != '\0'; i++)
	{
		ptrarr[i] = str[i];
	}
	ptrarr[size] = '\0';
	return (ptrarr);
}
