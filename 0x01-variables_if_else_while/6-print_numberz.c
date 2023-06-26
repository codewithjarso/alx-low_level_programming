#include <stdio.h>

/**
 * main - print numbers 0-9 using putchar
 * Return: o if it is a success
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
