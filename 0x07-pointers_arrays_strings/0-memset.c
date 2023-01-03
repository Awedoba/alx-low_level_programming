#include "main.h"
/**
 *_memcpy - The _memcpy() function copies n bytes
 * Auth0r: Severin
 *@dest:area where bytes are copied to
 *@src:area where bytes are copied from
 *@n:number of bytes to copy
 *Return: returns a pointer to n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
