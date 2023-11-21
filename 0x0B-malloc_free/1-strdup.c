#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate to new memory location
 * @str:initial value
 * ptr:pointer to duplicate str
 * Return: 0 on success
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (strlen(str) + 1));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str);
	return (ptr);
}
