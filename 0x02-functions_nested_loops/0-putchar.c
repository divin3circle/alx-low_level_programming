#include "main.h"

/**
* main -> program entry, prints _putchar in a new line
*
* Return: 0 always successful
*/

int main(void)
{

	char mess[] = "_putchar";
	int i;

/* loop through the message char*/
	for (i = 0; i < 9; i++)
	{
		if (mess[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(mess[i]);
	}
		return (0);
}
