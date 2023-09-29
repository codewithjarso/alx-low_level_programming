#include <stdio.h>
/**
 * main - entry poit of function
 * @argc:argument counter
 * @argv:argument array
 * Return:0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

