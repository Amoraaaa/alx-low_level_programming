#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	if (argc > 0) /* check if argument is valid */
	{
		printf("%s\n", argv[0]); /* print the name of the program */
	}
	return (0); /* return 0 on success */
}

