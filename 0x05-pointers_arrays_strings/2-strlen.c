#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: a pointer to a string
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	/* initialize a counter variable */
	int len = 0;
	/* loop through the string until the null terminator */
	while (s[len] != '\0')
	{
		/* increment the counter */
		len++;
	}
	/* return the counter value */
	return (len);
}

