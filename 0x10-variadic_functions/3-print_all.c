#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char current;

	va_start(args, format);

	while (format && format[i])
	{
		current = format[i];

		if (current == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (current == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (current == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (current == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
		}

		if (format[i + 1] && (current == 'c' || current == 'i' || current == 'f' || current == 's'))
			printf(", ");

		i++;
	}

	va_end(args);

	printf("\n");
}
