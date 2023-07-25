#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed to by dest
 * @dest: a pointer to the destination buffer
 * @src: a pointer to the source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	/* initialize a counter variable */
	int i = 0;
	/* loop through the source string until the null terminator */
	while (src[i] != '\0')
	{
		/* copy each character from src to dest */
		dest[i] = src[i];
		/* increment the counter */
		i++;
	}
	/* append the null terminator to dest */
	dest[i] = '\0';
	/* return the pointer to dest */
	return (dest);
}

