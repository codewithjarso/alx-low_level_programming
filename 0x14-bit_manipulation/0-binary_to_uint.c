#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to _int - function to coonvert binary to decimal
 * @b:pointer to the binary number
 * Return: 0 if null and the decimal number if not
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int weight = 1;
const char *p = b;

/* check for NULL pointer*/
if (b == NULL)
return (0);

/*lopping until the end of the string*/
while (*p != '\0')
{
p++;
}
/*move back on position to be on the last character not '\0'*/
p--;
/* moving from the end of the string to the beginning*/
while (p >= b)
{
/*check for valid characters 0 and 1*/
if (*p == '1')
{
result += weight;
}

else if (*p != '0')
{
return (0);
}
/*Update weight and move pointer back one character*/
weight *= 2;
p--;
}
return (result);
}
