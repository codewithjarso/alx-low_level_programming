#include "main.h"
/**
 * more_numbers - function that prints numbers 10 times
 * Return:void
 * _putchar - function to show on screen
 */
void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i <= 10;; i++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
