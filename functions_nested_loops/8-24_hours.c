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
	int hh;
	int mm;

	h = 0;
	m = 0;
	while (h <= 23)
	{
		while (m <= 59)
		{
			mm = m % 10;
			hh = h % 10;
			_putchar(h / 10 + '0');
			_putchar(hh + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(mm + '0');
			m++;
			_putchar('\n');
		}
		h++;
		m = 0;
	}
}
