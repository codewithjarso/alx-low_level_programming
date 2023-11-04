#include <stdlib.h>
/**
 * _strdup - duplicate to new memory location
 * @str:initial value
 * ptr:pointer to duplicate str
 * Return: 0 on success
 */
char *_strdup(char *str)
{
	int i = 0;
	int r = 0;
	char *ptr = (char *)malloc((i + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	if (ptr == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		ptr[r] = str[r];
	return (ptr);
}
