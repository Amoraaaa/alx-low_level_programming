#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Description: This program uses an optimized algorithm to find the largest
 * prime factor of the given number. It divides the number by 2 until it is
 * odd, then iterates over all odd numbers from 3 to the square root of the
 * number, dividing the number by each odd number until it is no longer
 * divisible. The largest prime factor is stored in the max_prime variable.
 * Finally, if the remaining number is greater than 2, it is also a prime
 * factor and is assigned to max_prime.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long n = 612852475143;
	long i;
	long max = -1;

	/* divide n by 2 until it is odd */
	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	/* find the odd factors of n */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		/* divide n by i until it is not divisible */
		while (n % i == 0)
 		{
			max = i;
			n /= i;
		}
	}

	/* if n is prime and greater than 2, it is the largest factor */
	if (n > 2)
		max = n;

	/* print the largest factor */
	printf("%ld\n", max);

	return (0);
}
