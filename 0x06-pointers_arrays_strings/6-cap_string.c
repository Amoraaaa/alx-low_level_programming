#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i;
	char prev;

	prev = ' ';
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((prev == ' ' || prev == '\t' || prev == '\n' || prev == ',' ||
			prev == ';' || prev == '.' || prev == '!' || prev == '?' ||
			prev == '"' || prev == '(' || prev == ')' || prev == '{' ||
			prev == '}') && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		prev = s[i];
	}

	return (s);
}

