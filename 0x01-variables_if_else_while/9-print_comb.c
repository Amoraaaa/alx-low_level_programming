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
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
