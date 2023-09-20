#include "main.h"
/**
* print_array - program function name 
* @a: parameter 1
* @n: parameter 2
*/

void print_array(int *a, int n)
{
int c;

for (c = 0; c < n; c++)
{
printf("%d", a[c]);

	if (c < n - 1)
		printf(",");

}
	printf("\n");
}

