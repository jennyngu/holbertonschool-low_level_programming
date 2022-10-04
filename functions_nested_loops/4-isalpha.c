#include "main.h"
/**
 *_isalpha - checks for alphabet characters
 *
 *@c: is the argument passed into the function ie. is being checked
 *
 *Return: return 1 if the c argument is a letter, return 0 otherwise
 */

int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
