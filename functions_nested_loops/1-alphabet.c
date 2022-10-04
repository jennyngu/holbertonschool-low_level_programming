#include "main.h"

void	print_alphabet(void)
{
	int i;
  
	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}
