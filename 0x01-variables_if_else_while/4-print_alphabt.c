#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main- print alphabets in lower without q and e
 * Return: o if it is a success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 133)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
