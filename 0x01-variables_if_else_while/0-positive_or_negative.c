#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* included standard I/O lib*/

/**
*main -> program entry point, prints whether a number is 0 positive or negative
*
*Return: 0 always(successful)
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
		printf("%d is 0\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
