#include "main.h"
/**
 * more_numbers - function that prints numbers 10 times
 * Return:void
 * _putchar - function to show on screen
 */
void more_numbers(void)
{
	int i, c;

	for (i = 1; i <= 10;; i++)
	{
		for (c = 0; c <= 14;)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
