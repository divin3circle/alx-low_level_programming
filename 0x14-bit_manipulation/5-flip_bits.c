#include "main.h"

/**
 * flip_bits - flip bits from one number to another
 * @n: first bits
 * @m: second bit
 * Return: number of bits
 */
unsigned int flip_bits(unsignedlong int n, unsigned long int m)
{
	unsigned int kbits;

	for (kbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			kbits++;
	}

	return (kbits);
}
