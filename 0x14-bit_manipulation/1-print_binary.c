#include "main.h"
/**
 * print_binary - function to convert decimal into binary
 * @n: decimal to be converted
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
   int i = 1;

   while (n != NULL)
   {

      if (n & 1)
      {
         _putchar('1');
      }
      else
      {
         _putchar('0');
      }
      n =  n >> 1;
   }
}
