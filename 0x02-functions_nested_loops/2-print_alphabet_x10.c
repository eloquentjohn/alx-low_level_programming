#include "main.h"

/**
  * print_alphabet - This is the program that prints alphabet ten time
  *
  * Return: return 0
  */
void print_alphabet_x10(void)
{
	char b;
	int d = 0

	while (d <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		d++;
	}
}
