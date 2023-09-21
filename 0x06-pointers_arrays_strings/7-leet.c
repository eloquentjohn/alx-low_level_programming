#include "main.h"
#include <stdio.h>
/**
  *leet - main function
  *
  * @n: Function parameter
  *
  *Return: value of n
 */

char *leet(char *n)
{
	int c, r;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	
	for (c = 0; n[c] != '\0'; c++)
	{
	for (r = 0; r < 10; r++)
	{
	if (n[c] == s1[r])
	{
	n[c] = s2[r];
	}
	}
	}
	return (n);
}
