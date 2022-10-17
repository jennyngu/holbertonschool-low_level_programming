#include "main.h"
/**
 *_strlen_recursion - returns string length
 *@s: pointer to a string
 *Return: string length
 */

int _strlen_recursion(char *s)
{
	/*if where pointer is pointing to is '\0', return 0*/
	if (*s == '\0')
	{
		return (0);
	}
	/*+1 to str length starting from [0] (already counted as 1)*/
	return	(1 + _strlen_recursion(s + 1));
}
