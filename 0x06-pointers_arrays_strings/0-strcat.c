#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: the destination string
 *
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* find the length of dest */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* append src to dest */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	/* add a terminating null byte */
	dest[i + j] = '\0';

	return (dest);
}

