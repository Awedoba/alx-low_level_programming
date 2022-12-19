#include "main.h"
/**
 * _strlen - return the length of  string
 * Auth0r: Severin
 * @s: char to check
 * Description: returns the length of a string
 * Return: int lenght
 */

int _strlen(char *s)
{
    int lenght = 0;

    for (; *s++;)
        lenght++;

    return (lenght);
}
