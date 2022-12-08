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
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(n));
	return (0);
}
