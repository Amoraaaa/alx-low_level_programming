#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: a pointer to an int
 *
 * @b: a pointer to another int
*/

void swap_int(int *a, int *b)
{
	/* check if a and b are not null */
	if (a != NULL && b != NULL)
	{
		/* use a temporary variable to store the value of a */
		int temp = *a;
		/* assign the value of b to a */
		*a = *b;
		/* assign the value of temp to b */
		*b = temp;
	}
}


