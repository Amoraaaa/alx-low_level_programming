#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: 0 on success
*/

int main(void)
{
	char password[100]; /* the password to generate */
	int i = 0; /* index of the password */
	int sum = 0; /* sum of the ascii values of the password */
	int r; /* random number */

	srand(time(NULL)); /* initialize the random seed */

	/* generate a random password until the sum is 2772 */
	while (sum != 2772)
	{
		r = rand() % 128; /* generate a random number between 0 and 127 */
		password[i] = r; /* assign the random number to the password */
		sum += r; /* update the sum */
		i++; /* increment the index */

		/* if the sum is too big, subtract from the last character */
		if (sum > 2772)
		{
			password[i - 1] -= (sum - 2772);
			sum = 2772;
		}
	}

	password[i] = '\0'; /* terminate the password with a null byte */

	printf("%s\n", password); /* print the password */

	return (0);
}

