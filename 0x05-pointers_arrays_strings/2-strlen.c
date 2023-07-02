#include "main.h"
/**
 * _strlen - get the length of a string
 * @s:input of the string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
