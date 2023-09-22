#include "main.h"

/**
  *_strcat - main function of the prototype
  *
  * @src: Concatenation parameter
  *
  * @dest: Concatenation parameter
  *
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
int c, r;

c = 0;
r = 0;

while (dest[c] != '\0')
{
	c++;
}

while (src[r] != '\0')
{
	dest[c] = src[r];
	c++;
	r++;
}
dest[c] = '\0';
return (dest);
}
