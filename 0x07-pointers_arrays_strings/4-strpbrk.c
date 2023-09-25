#include "main.h"

/**
  * _strpbrk - main function of the prototype
  *
  * @s: function parameter
  *
  * @accept: Fuunction parameter
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int c, j;

	for (c = 0; s[c] != '\0'; c++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[c] == accept[j])
	return (s + c);
	}
	}
	return (0);
}
