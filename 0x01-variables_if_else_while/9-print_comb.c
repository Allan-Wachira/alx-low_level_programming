#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ', ' followed by a space.
 * Numbers should be printed in ascending order.
 * You can only use the putchar function (every other function is forbidden).
 * All your code should be in the main function.
 * You can only use putchar four times maximum in your code.
 * You are not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0'); /* Convert digit to character and print */
		if (digit < 9)
		{
			putchar(','); /* Print comma */
			putchar(' '); /* Print space */
		}
		digit++;
	}

	putchar('\n'); /* Print a newline character */

	return (0);
}
