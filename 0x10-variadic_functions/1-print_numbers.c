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
	unsigned int i, result;
	va_list data;

	va_start(data, n);
	for (i = 0; i < n; i++)
	{
		/*store our numbers in result then print it*/
		result = va_arg(data, int);
		printf("%d", result);
		/*if this is not the last integer print the separator*/
	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	va_end(data);
	printf("\n");
}
