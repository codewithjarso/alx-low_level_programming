#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concats two string together
 * @s1:first string
 * @s2:second string
 * @n:value measurement
 * Return: s3 pointer on success and NULL otherwise
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;
	s3 = malloc(s1_len + n + 1);
	if (s3 == NULL)
		return (NULL);
	memcpy(s3, s1, s1_len);
	memcpy(s3 + s1_len, s2, n);
	s3[s1_len + n] = '\0';
	return (s3);
}
