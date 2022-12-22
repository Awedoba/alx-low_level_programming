#include "main.h"
/**
 * *rot13 - function
 * Auth0r: Severin
 *@s: int to check
 * Description: change variable data by pointer
 * Return: Always void
 */

char *rot13(char *s)
{
    int count = 0, i;
    char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    while (*(s + count) != '\0')
    {

        for (i = 0; i < 52; i++)
        {
            if (*(s + count) == alphabet[i])
            {
                *(s + count) = rot13[i];
                break;
            }
        }
        count++;
    }

    return (s);
}
