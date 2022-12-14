/*
 * File: 11-print_to_98.c
 * Author: Severin
 */

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints numbers from input to 98
 *
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}