#include "main.h"
/**
 * swap_int - swaps the value of two ints
 * Auth0r: Severin
 * @a: first int
 * @b: second int
 * Return void
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}