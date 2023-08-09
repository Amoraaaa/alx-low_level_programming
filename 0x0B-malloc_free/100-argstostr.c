#include <string.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of the program
 *
 * @ac: Argument count
 *
 * @av: Argument vector
 *
 * Return: Pointer to new string, or NULL on failure
*/


char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	j = 0;

	for (i = 0; i < ac; i++) 
	{
		strcpy(&str[j], av[i]);
		j += strlen(av[i]);
		str[j] = '\n';
		j++;
	}

	str[j] = '\0';

	return (str);
}

