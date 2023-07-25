#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: a pointer to a string
 */
void print_rev(char *s)
{
	/* initialize a counter variable */
	int len = 0;
	/* loop through the string until the null terminator */
	while (s[len] != '\0')
	{
		/* increment the counter */
		len++;
	}
	/* loop through the string backwards from the last character */
	while (len > 0)
	{
		/* decrement the counter */
		len--;
		/* print each character using putchar */
		putchar(s[len]);
	}
	/* print a new line */
	putchar('\n');
}

