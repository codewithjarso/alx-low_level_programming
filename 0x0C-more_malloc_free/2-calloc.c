#include <stdlib.h>
/**
 * _calloc - function to allocate memory to an array
 * @nmemb:Array elements
 * @size: size of bytes of each element
 * Return: on success ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (ptr);
}



