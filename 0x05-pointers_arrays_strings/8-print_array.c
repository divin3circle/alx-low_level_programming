#include "main.h"

/**
* print_array - prints a specified number of array elements
* @a: address of the array
* @n: number of elements to print
* Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--, i++)
		{
			printf("%d", a[i]);
			if (n > 0)
				printf(", ");
	}
	printf("\n");
}
