#include "main.h"
/**
 * _strlen_recursion - function to return length of a string
 * @s: input string
 * Return: the legth of string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
