#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	fizzbuzz(100);
	return (0);
}

void fizzbuzz(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

