#include "main.h"
#include <string.h>
/**
 * binary_to _int - function to coonvert binary to decimal
 * @b:pointer to the binary number
 * Return: 0 if null and the decimal number if not
 */
unsigned int binary_to_uint(const char *b)
{
   int result = 0;
   int len = strlen(b);

   if (b == NULL)
      return (0);

   for (int i = 0;i<len; i++)
   {
      if (b[i] == '1')
         result = result * 2 + 1;
      else if (b[i] == '0')
         result = result * 2;
      else
         return (0);
   }
   return (result);
}
