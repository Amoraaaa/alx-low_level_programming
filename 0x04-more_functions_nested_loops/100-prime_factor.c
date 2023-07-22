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
	long num = 612852475143;
	long max_prime = -1;

	while (num % 2 == 0)
	{
		max_prime = 2;
		num /= 2;
	}

	for (int i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max_prime = i;
			num /= i;
		}
	}

	if (num > 2)
	max_prime = num;

	printf("%ld\n", max_prime);

	return (0);
}
