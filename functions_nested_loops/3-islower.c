#include "main.h"
/**
*_islower - checks for lowercase characters
*
*@c: The charater the function is checking
*
*Return: 1 is c is lowercase or 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
		{
		return (0);
		}
}
