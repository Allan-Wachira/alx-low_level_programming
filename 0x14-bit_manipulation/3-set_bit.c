#include "main.h"

/**
 * @n: this is a pointer to the bit.
 * @index: this is the index to set the value at - indices start at 0.
 * set_bit - this prompt sets the value of a bit at a given index to 1.
 *
 * Return: should return if an error occurs - -1.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
