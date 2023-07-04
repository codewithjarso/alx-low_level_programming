#include "main.h"

/**
 * _isdigit -function to check if the input is a digit
 * @c: input to be checked if it is a digit
 * Return: o if not a digit and 1 if a digit
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
