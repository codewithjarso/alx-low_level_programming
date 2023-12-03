#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: separates our variables
 * @n:size of string arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *result;
	va_list names;

	va_start(names, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(names, char *);
		if (result != NULL)
		{
			printf("%s", result);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");
		}
		va_end(names);
	}
	printf("\n");
}
