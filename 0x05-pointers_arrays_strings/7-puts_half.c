#include "main.h"
/**
* puts_half - program function name 
* @str: function parameter
*/

void puts_half(char *str)
{
int c;
int n;
int count = 0;

for (c = 0; str[c] != '\0'; c++)
{
	count++;
}
	n = (count - 1) / 2;
for (c = n + 1; str[c] != '\0'; c++)
{
	_putchar(str[c]);
}
	_putchar('\n');
}
