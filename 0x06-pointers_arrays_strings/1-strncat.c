#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 *
 * @dest: the destination string
 *
 * @src: the source string
 *
 * @n: the maximum number of bytes to use from src
 *
 * Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* find the length of dest */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* append n bytes of src to dest */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	/* add a terminating null byte if src is shorter than n */
	if (j < n)
	{
		dest[i + j] = '\0';
	}

	return (dest);
}

