#include <stdio.h>

/**
* main -> program entry, displays lower alhabets except q & e
*
*Return: always 0(success)
*/
int main(void)
{
	int c;

	/*loop through to disply alphabets */
	for (c = 'a'; c <= 'z'; c++)
	{
		/*exclude q and e */
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
