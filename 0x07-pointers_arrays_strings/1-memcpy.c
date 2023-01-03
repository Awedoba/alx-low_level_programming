#include "main.h"
/**
 *_memset - The _memset() function fills
 * the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *@s:target
 *@b: constant byte
 *@n:number of byte
 *Return: returns new value of target
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
