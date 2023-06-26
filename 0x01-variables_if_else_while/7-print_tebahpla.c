#include <stdio.h>

/**
 * main - print alphabets in lowercase begining from z
 * Return: 0 if it is a success
 */
int main(void)
{
	char ch = 'z';

	while (ch <= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
