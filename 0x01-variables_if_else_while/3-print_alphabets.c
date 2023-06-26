#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: o if it runs successfully
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch = toupper(ch);
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
