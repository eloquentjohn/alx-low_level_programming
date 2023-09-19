#include "main.h"
/**
 * int _strlen - this is the program functiion
 * @s: funtion parameter
 * Return: The length of string
 */
int _strlen(char *s)
{
int c;
int count =  0;

for (c = 0; s[c] != '\0'; c++)
	count++;
return (count);
}
