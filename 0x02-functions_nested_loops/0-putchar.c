#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 * Return: 0 if successful
*/
int main(void)
{
	char *s = "_putchar\n";
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}

