#include "main.h"
/**
 * _strcmp - function
 * Auth0r: Severin
 *@s1: int to check
 *@s2: int to check
 * Description: change variable data by pointer
 * Return: *str_one - *str_two void
 */

int _strcmp(char *s1, char *s2)
{

    char *str_one = s1;
    char *str_two = s2;

    while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
    {
        str_one++;
        str_two++;
    }

    return (*str_one - *str_two);
}
