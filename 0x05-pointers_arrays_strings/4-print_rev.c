#include "main.h"

/**
 * print_rev - printing a string in reverse
 * Auth0r: Severin
 * @s: the char
 * returun void
 */

void print_rev(char *s)
{
int i, n;

n = 0;
while (s[n] != '\0')
    n++;

for (i = n - 1; i >= 0; i--)
{
    _putchar(s[i]);
}
_putchar('\n');
}
