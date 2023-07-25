#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: a pointer to a string
*/

void _puts(char *str)
{
	/* loop through the string until the null terminator */
	while (*str != '\0')
	{
		/* print each character using putchar */
		putchar(*str);
		/* increment the pointer */
		str++;
	}
	/* print a new line */
	putchar('\n');
}

