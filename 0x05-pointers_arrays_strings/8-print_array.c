#include "main.h"

/**
 * print_array - prints n element of an array of integers
 * Auth0r: Severin
 * @a: int to check
 * @n: int to check
 * Return: void
 */
void print_array(int *a, int n)
{
    int x;

    for (x = 0; x < n; x++)
        if (x != n - 1)
            _putchar(a[x]);
        else
            _putchar(a[x]);
    _putchar("\n");
}
