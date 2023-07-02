#include "main.h"
/**
 * swap_int - swaps the values of the pointers
 * @a: input value for a
 * @b: input value for b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = *a;
}
