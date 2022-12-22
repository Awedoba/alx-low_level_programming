#include "main.h"
/**
 * *_strncpy - function
 * Auth0r: Severin
 *@dest: int to check
 *@src: int to check
 *@n: int to check
 * Description: change variable data by pointer
 * Return: dest void
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}
