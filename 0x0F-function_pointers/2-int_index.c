#include <stdio.h>
/**
 * int_index -  function that searches for an integer.
 * @array: array to be searched
 * @size: size of array
 * @cmp:pointer to a function
 * Return: 0 on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; 1 < 20; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);

}
