#include "main.h"

/**
* _strcpy - program function name
*  @dest: parameter 1
*  @src: parameter 2 
*  Return: always 0
*/

char *_strcpy(char *dest, char *src)
{
int c;

for (c = 0; src[c] != '\0'; c++)
{
	dest[c] = src[c];
}
	dest[c] = '\0';
	return (dest);
}
