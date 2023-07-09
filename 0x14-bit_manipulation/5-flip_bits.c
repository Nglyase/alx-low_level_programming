#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitz;

	for (bitz = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bitz++;
	}

	return (bitz);
}
