#include <stdio.h>
#include <unistd.h>
/**
 * main - c program that prints a line to the standard unix
 * Return: 1 always (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
