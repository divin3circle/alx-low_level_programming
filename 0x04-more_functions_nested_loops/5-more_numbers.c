#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: 0 always(success)
 */
void more_numbers(void)
{
int o;
int t;

for (o = 0; o <= 10; o++)
{
for (t = 0; t <= 14; t++)

{
if (t > 9)
{
_putchar((t / 10) + '0');
}
_putchar((t % 10) + '0');
}
_putchar('\n');
}
}
