#include "main.h"
/**
 *print_diagsums -  a function that prints the sum of
 * Auth0r: Severin
 * the two diagonals of a square matrix of integers.
 *@a:matrix to be summed
 *@size:size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		tl += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		tr += a[i];
	}

	printf("%d, %d\n", tl, tr);
}
