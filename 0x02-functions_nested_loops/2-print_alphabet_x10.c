#include "main.h"

/**
  * print_alphabet - this is the program that prints alphabet ten times
  *
  * Return: reaturn 0
  */
void print_alphabet(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
