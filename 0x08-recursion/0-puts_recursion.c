#include "main.h"
/*
 * _puts_recursion - writes function like puts()
 * @s: input
 * Return:Always o a success
 */

void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_put_recursion(*s +1);
	}
	else
		_putchar("\n");
}

