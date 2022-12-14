/*
 * File: 3-islower.c
 * Authur: severin
 */
#include "main.h"
/**
 * _islower
 * @c: The character to be checked
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
