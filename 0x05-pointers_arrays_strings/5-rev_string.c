#include "main.h"
/**
* rev_string - program function name
* @s: function parameter
*/

void rev_string(char *s)
{
int c;
int count = 0;

for (c = 0; s[c] != '\0'; c++)
	count++;
for (c = 0; c < count / 2; c++)
{
char b;
b = s[c];
	s[c] = s[count - 1 - c];
	s[count - 1 - c] = b;
}


}
