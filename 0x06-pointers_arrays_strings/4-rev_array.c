#include "main.h"

/**
  * reverse_array - The main faunction
  *
  * @a: Function parameter
  *
  * @n: Function parameter
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0; c < n--; c++)
	{
	b = a[c];
	a[c] = a[n];
	a[n] = b;
	}
}
