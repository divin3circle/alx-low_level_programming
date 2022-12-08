#include <stdio.h>

/**
*main -> program entry, prints datatypes and thier sizes
*
*Return value: 0 (successful)
*/
int main(void)
{
	char i;
	int j;
	long int l;
	long long int m;
	float n;
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(n));
	return (0);
}
