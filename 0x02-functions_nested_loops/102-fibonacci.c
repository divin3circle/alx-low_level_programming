#include <stdio.h>

/**
* main - pogram entry
*
* Return: always 0(success)
*/
int main(void)
{
	int i, n = 50;
	int t1 = 1, t2 = 2;
	int next = t1 + t2;
	
	printf("%d, %d, ", t1, t2);

	for (i = 3; i <= n; ++i)
	{
		printf("%d, ", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}

	return (0);
}
