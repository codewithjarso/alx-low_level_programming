#include <stdlib.h>
/**
 * malloc_checked -assign a memory to a integer value
 * return:98 on failure
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	b = malloc(b);
	if(b == NULL)
		return 98;
	return (b);
}
