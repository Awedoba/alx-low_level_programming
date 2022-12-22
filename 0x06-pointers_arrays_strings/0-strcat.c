#include "main.h"
/**
 * *_strcat - function
 * Auth0r: Severin
 *@dest: int to check
 *@src: int to check
 * Description: change variable data by pointer
 * Return: Always void
 */

char *_strcat(char *dest, char *src)
{
    int i, j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';

    return (dest);
}
