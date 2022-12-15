/*
 * File: 5-more_nbers.c
 * Author: Severin
 */

#include "main.h"

/**
 * more_nbers - Prints the nbers 0-14 ten times.
 */
void more_nbers(void)
{
    int n, count;

    for (count = 0; count <= 9; count++)
    {
        for (n = 0; n <= 14; n++)
        {
            if (n > 9)
                _putchar((n / 10) + '0');
            _putchar((n % 10) + '0');
        }
        _putchar('\n');
    }
}