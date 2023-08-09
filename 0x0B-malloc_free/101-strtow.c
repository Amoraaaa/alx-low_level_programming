#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, l, word_count, word_len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0, word_count = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++;

		for (k = j, word_len = 0; str[k] && str[k] != ' '; k++)
			word_len++;

		words[i] = malloc(sizeof(char) * (word_len + 1));
		if (words[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(words[l]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < word_len; k++, j++)
			words[i][k] = str[j];
		words[i][k] = '\0';
	}
	words[i] = NULL;

	return (words);
}


