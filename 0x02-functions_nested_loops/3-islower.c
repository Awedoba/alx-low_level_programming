#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
