#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a pointer to a string
 */
void rev_string(char *s)
{
	/* initialize two counter variables */
	int len = 0;
	int i = 0;
	/* loop through the string until the null terminator */
	while (s[len] != '\0')
	{
		/* increment the counter */
		len++;
	}
	/* loop through the string from both ends until the middle */
	while (i < len / 2)
	{
		/* use a temporary variable to swap the characters */
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		/* increment and decrement the counters */
		i++;
		len--;
	}
}

