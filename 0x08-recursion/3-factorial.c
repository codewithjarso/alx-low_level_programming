#include "main.h"
/**
 * factorial- function to retru a factorial
 * @n: number to return the factoria of
 * Return: o if success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

