#include "main.h"
/**
 * swap_int - this is the program function name
 *
 * @a: first pointer
 * @b: second pointer
 *
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
