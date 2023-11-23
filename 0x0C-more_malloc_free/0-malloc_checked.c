#include <stdlib.h>
/**
 * malloc_checked -assign a memory to a integer value
 * return:98 on failure
 * @b:size to allocate
 * Return:ptr on success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	return (ptr);
}
