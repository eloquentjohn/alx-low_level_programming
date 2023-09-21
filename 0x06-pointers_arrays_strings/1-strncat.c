#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function parameter
  *
  * @src: Function parameter
  *
  * @dest: Function parammeter
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int c, r;
	
	c = 0;
	r = 0;
	
	while (dest[c] != '\0')
	{
	c++;
	}
	while (r < n && src[r] != '\0')
	{
	dest[c] = src[r];
	c++;
	r++;
	}
	dest[c] = '\0';
	return (dest);
}
