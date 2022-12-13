#include <stdio.h>
/**
* print_alphabet -> prints all alphabets fro a-z
* in lowercase
* Return: void always success
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

/**
* main -> program entry, call the print alphabet fun
* Return: 0 always successful
*
*/
int main(void)
{
	print_alphabet();
	return (0);
}


