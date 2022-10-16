#include "main.h"
/**
 *print_chessboard - prints chessboard'
 *@a: array of 8 char
 *Return: rows and columns printing chess pieces
 */

void print_chessboard(char (*a)[8])
{
	int rows;
	int columns;

	rows = 0;
	while (rows < 8)
	{
		columns = 0;
		while (columns < 8)
		{
			/*print rows first then columns*/
			_putchar(a[rows][columns]);
			columns = columns + 1;
		}
		_putchar('\n');
		rows = rows + 1;
	}
}
