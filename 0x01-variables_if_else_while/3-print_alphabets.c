#include <stdio.h>

/**
 * main - prints the alphabets in lower and uppercase
 * Return: 0 if it is a sucess
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)
	{
		putchar(alp[x]);
	}
	putchar('\n');
	return (0);
}
