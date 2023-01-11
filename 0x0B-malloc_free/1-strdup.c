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
	int str_len = 0;
	int i = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	ptrarr = malloc((str_len * sizeof(char)) + 1);
	if (ptrarr == NULL)
		return ("failed to allocate memory");

	while (str[i] != '\0')
	{
		ptrarr[i] = str[i];
		i++;
	}
	ptrarr[i] = '\0';
	return (ptrarr);
}
