#include "main.h"

/**
 * get_bit - this gets the value of a bit at a given index.
 * @index: the index function is to get the value at - indices start at 0.
 * @n: this is the bit.
 * Return: should return if an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
