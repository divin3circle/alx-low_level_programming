#include <stdio.h>

/**
 * main - program entry
 *
 * Return: 0 always
 */

int main(void)
{
	int p = 100;
	int a;

	a = 1;

	while (a <= p)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf(" FizzBuzz");
		else if (a % 3 == 0)
			printf(" Fizz");
		else if (a % 5 == 0)
			printf(" Buzz");
		else
		{
			if (a == 1)
				printf("%d", a)
			else
				printf(" %d", a);
		}
		a++;
	}
	printf("\n");
	return (0);
}
