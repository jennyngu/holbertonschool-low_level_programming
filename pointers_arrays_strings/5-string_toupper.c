#include "main.h"
/**
 *string_toupper - converts lowercase letters to uppercase
 *@ptr: pointer arg, points to string
 *Return: the converted string
 */

char *string_toupper(char *ptr)
{
	int i;

	i = 0;
	while (ptr[i] != '\0')
	{
		/**
		 *if index i is > than ascii value of 'a'(97)
		 *and < value of 'z'(122)
		 */
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			/**
			 *change value of i to the ascii num - 32
			 *(32 is the diff b/w lower and upper on ascii table)
			 */
			ptr[i] = ptr[i] - 32;
		}
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
