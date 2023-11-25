#include "main.h"

/**
 * @n: this is the number to be printed in binary.
 * print_binary - this prints the binary representation of a number.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
