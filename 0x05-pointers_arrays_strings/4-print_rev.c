#include "main.h"
/**
 * print_rev - this is the program function
 * @s: function parameter
 */

void print_rev(char *s)

{
int c;
int count = 0;

for (c = 0; s[c] != '\0'; c++)
	count++;

for (c = count - 1; c >= 0; c--)
{
	_putchar (s[c]);
}
	_putchar ('\n');
}
