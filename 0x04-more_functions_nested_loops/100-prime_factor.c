#include <stdio.h>
#include <math.h>
/**
 * largest_prime_factor - finds the largest prime factor of a given number
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor of n
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
