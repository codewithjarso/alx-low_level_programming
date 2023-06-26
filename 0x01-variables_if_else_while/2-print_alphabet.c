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
		putchar("%c", ch);
		ch++;
	}
	return (0);
}
