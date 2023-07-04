#include "main.h"

/**
 * _isupper - function to return if a letter is upper or lower
 *@c:char to be returned
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
