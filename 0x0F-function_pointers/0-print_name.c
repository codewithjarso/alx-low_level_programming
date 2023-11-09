#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function to print name on the screen
 * @name:name to be printed
 * @f:pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
