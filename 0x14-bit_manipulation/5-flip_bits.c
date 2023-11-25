#include "main.h"

/**
 * @m: this is the number to flip n to.
 * @n: this represents the number.
 * flip_bits - this counts the number of bits needed to be
 *             flipped to get from one number to another.
 *
 * Return: this should return the necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
