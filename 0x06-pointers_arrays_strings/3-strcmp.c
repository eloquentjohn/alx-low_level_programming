#include "main.h"

/**
  * _strcmp - The main function
  *
  * @s1: Function parameter
  *
  * @s2: Function parameter
  *
  * Return: s1, s2
  */
int _strcmp(char *s1, char *s2)
{
int c = 0;

while (s1[c] != '\0' && s2[c] != '\0')
{
	if (s1[c] != s2[c])
	{
	return (s1[c] - s2[c]);
	}
	c++;
	}
	return (0);
}
