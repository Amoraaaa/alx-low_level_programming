#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: a pointer to a string
 */
void puts2(char *str)
{
	/* initialize a counter variable */
	int i = 0;
	/* loop through the string until the null terminator */
	while (str[i] != '\0')
	{
		/* print only the even-indexed characters using putchar */
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		/* increment the counter */
		i++;
	}
	/* print a new line */
	putchar('\n');
}

