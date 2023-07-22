#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer to print
*/
void print_number(int n)
{
	int power;
	int digit;
	int sign = 1;

	/* determine sign of n */
	if (n < 0)
	{
		sign = -1;
		/* print negative sign */
		_putchar('-');
	}

	/* find largest power of 10 */
	power = 1;
	while (n / power / 10 != 0)
		power *= 10;

	/* print each digit */
	while (power != 0)
	{
		digit = n / power % 10 * sign;
		_putchar(digit + '0');
		power /= 10;
	}
}


