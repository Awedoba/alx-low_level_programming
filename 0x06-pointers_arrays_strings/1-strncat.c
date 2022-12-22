#include "main.h"
/**
 * *_strncat - function
 * Auth0r: Severin
 *@dest: int to check
 *@src: int to check
 *@n: int to check
 * Description: change variable data by pointer
 * Return: dest char
 */

char *_strncat(char *dest, char *src, int n)

{
    int i, j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    j = 0;
    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
    }

    dest[i] = '\0';

    return (dest);
}
