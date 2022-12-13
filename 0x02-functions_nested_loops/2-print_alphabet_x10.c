#include <stdio.h>

/**
* print_alphabet_x10 - prints alphabet a-z 10 times
*
* Description: loops through alphabets a-z and prints them 10 times
* Return: void, does not return any value
*/
void print_alphabet_x10(void)
{
	int i, count;

	for (count = 0; count <= 10; count++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}

/**
* main - program entry, calls the print_alphabet_x10 fun
*
* Return: 0 always(successful)
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}
