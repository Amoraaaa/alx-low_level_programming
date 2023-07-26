#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: the string to convert
 *
 * Return: the converted integer
*/

int _atoi(char *s)
{
	int i = 0; /* index of the string */
	int sign = 1; /* sign of the number */
	int num = 0; /* the number to return */

	/* skip any non-digit characters */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		/* update the sign if there is a - or + sign */
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;
		i++;
	}

	/* convert the digits to an integer */
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + sign * (s[i] - '0');
		i++;
	}

	return (num);
}

