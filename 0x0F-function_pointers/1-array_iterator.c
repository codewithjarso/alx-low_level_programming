#include <stdio.h>
/**
 * array_iterator - a function that executes a function
 * @array: array of the function
 * @size:size of array
 * @action:function pointer
 * Return:0 on success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
