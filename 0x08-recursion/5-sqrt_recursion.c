#include "main.h"
#include<math.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input value
 * Return: the resulting squareroot
 */
int _sqrt_recursion(int n)
{
	if (sqrt(n))
		return (-1);
	return (_sqrt_recursion(sqrt(n)));
}
