#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: o if it runs successfully
 */

int main(void)
{
	char ch = 'A';

	while (ch <= 'Z')
	{
		char ch2 = tolower(ch);
		putchar(ch2);
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
