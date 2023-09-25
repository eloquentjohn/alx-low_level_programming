#include "main.h"

/**
  * print_chessboard - main function
  *
  * @a: function parameter declared
  *
  * Return: Always 0.
  */
void print_chessboard(char (*a)[8])
{
	int c;
	int r;

	for (c = 0; c < 8; c++)
	{
	for (r = 0; r < 8; r++)
	_putchar(a[c][r]);
	_putchar('\n');
		}
}
