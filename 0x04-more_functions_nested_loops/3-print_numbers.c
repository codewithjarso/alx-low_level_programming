#include "main.h"
/**
 * print_numbers - function to print numbers from 0-9
 * folloewd by a new line
 * _putchar - print value
 * Return:0 if sucess
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
