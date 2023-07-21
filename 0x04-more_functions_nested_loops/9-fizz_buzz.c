#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ")
		else
			printf("%d ", i);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}


