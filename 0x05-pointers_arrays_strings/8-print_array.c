#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer to an array of integers
 * @n: the number of elements to be printed
 */
void print_array(int *a, int n)
{
	/* initialize a counter variable */
	int i = 0;
	/* loop through the array until n elements are printed */
	while (i < n)
	{
		/* print the element using printf */
		printf("%d", a[i]);
		/* print a comma and a space if it is not the last element */
		if (i < n - 1)
		{
			printf(", ");
		}
		/* increment the counter */
		i++;
	}
	/* print a new line */
	printf("\n");
}

