#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: separates the numbers printed
 * @n:number of arguments in the function
 * Return: the numbers;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	int result;

	va_list data;

	va_start(data, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		result = printf("%d%c ", va_arg(data, int), separator);
	}
	va_end(data);
	printf("\n");
	return (result);
}
