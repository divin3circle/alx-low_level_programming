#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* inlcuded standard input and output library*/
/**
* main -> program entry point, checks if a number is negative, positive or 0
*
* Return: Always 0(successful)
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
		
