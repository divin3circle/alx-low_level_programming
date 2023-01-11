#include "main.h"
#include <stdlib.h>

/**
* str_concat - conc two strings and return
* a pointer to the new str location
* @s1: first string
* @s2: second string
* Return: pointer to concatenated str
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int size;
	char *ptrstr;
	int k = 0;
	int count = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	while (s1[count] != '\0')
	{
		count++;
	}

	size = count + 1;
	ptrstr = malloc(size * sizeof(char));
	if (ptrstr == NULL)
		return (NULL);

	while (s1[k] != '\0')
	{
		ptrstr[k] = s1[k];
		k++;
	}
	return (ptrstr);
}
