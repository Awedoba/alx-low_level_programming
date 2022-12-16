/*
 * File: 6-print_line.c
 * Author: Severin
 */

#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to show.
 */
void print_line(int n)
{
    int lenght = 0;

    if (n > 0)
    {
        for (lenght; lenght < n; lenght++)
            _putchar('_');
    }

    _putchar('\n');
}
