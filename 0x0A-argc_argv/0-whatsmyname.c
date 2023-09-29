#include <stdio.h>
#include "main.h"
/**
 * main -  entry point
 * @argc:argument counter
 * @argv:argument vector
 * Return:0 if success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
