#include "main.h"
#include <string.h>
/**
 *print_rev - prints the reverse of a string
 *
 *@str: *str is the pointer argument that points to a string
 *
 *Return: nothing because void
 */

void print_rev(char *str)
{
       int i;
       int length;

       length = strlen(str) - 1;
       for (i = length; i >=0 ;i --)
       {
	       _putchar(str[i]);
       }
       _putchar('\n');
}
