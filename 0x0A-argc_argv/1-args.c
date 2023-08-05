#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	if (argc >= 0) /* check if argument is valid */
	{
		printf("%d\n", argc - 1); /* print the number of arguments */
	}
	return (0); /* return 0 on success */
}

