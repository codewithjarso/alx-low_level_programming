#include <stdarg>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n:first value
 * Return:sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list sumNumbers;

	va_start(sumNumbers, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(sumNumbers, int);
	return (sum);
}
