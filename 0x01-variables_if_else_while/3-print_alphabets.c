#include <stdio.h>

/**
 * main - prints the alphabets in lower and uppercase
 * Return: 0 if it is a sucess
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
		putchar(x);
	}
	putchar('\n');
	return (0);
}
