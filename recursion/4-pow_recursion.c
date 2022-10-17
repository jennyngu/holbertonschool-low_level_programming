#include "main.h"
/**
 *_pow_recursion - returns x raised by power of y;
 *@x: base int to be raised by power of y
 *@y: power int to raise base x
 *Return: value of x raised by power of y
 */

 int _pow_recursion(int x, int y)
 {
	 if (y < 0)
	 {
		 return (-1);
	 }
	 else if (y == 0)
	 {
		 return (1);
	 }
	 return (x * _pow_recursion(x,  y - 1));
 }
