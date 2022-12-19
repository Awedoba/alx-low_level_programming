#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * Auth0r: Severin
 * @s: The pointer to convert
 *
 * Return: int
 */
int _atoi(char *s)
{
int a = 0;
unsigned int n = 0;
int min = 1;
int i = 0;

while (s[a])
{
    if (s[a] == 45)
    {
        min *= -1;
    }

    while (s[a] >= 48 && s[a] <= 57)
    {
        n = 1;
        n = (n * 10) + (s[a] - '0');
        a++;
    }

    if (n == 1)
    {
        break;
    }

    a++;
}

n *= min;
return (n);
}
