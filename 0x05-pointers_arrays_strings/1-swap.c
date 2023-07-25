#include "main.h"

/**
 * reset_to_98 - updates the value it points to to 98
 * @n: a pointer to an int
 */
void reset_to_98(int *n)
{
	/* check if n is not null */
	if (n != NULL)
	{
		/* dereference n and assign 98 to it */
		*n = 98;
	}
}

