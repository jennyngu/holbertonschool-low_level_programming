#include "main.h"
/**
 *jack_bauer - prints every minute of the day 00:00 - 23:59
 *
 *Return: returns 0 if successful
 */

void jack_bauer(void)
{
  int h;
  int m;

  for (h = 0; h <= 23; h++)
    {
      for (m = 0; m <= 59; m++)
       {
	     _putchar(h);
	     _putchar(':');
	     _putchar(m);
	}
    }
}
