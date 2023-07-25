#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a pointer to a string
 */
void puts_half(char *str)
{
	/* initialize two counter variables */
	int len = 0;
	int i = 0;
	/* loop through the string until the null terminator */
	while (str[len] != '\0')
	{
		/* increment the counter */
		len++;
	}
	/* check if the number of characters is odd or even */
	if (len % 2 == 0)
	{
		/* start from the middle of the string */
		i = len / 2;
	}
	else
	{
		/* start from n characters away from the end of the string */
		i = (len - 1) / 2 + 1;
	}
	/* loop through the string from i to the end */
	while (i < len)
	{
		/* print each character using putchar */
		putchar(str[i]);
		/* increment the counter */
		i++;
	}
	/* print a new line */
	putchar('\n');
}

