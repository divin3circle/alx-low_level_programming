#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the charcter c to stdout
* @c: The charcter to write
*
* Return: On success 1 and -1 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}