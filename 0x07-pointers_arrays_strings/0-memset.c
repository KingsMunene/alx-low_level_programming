#include "main.h"
/**
 * *_memset - function fills the first n bytes of the memory area pointed to by s
 * @n: The number of times to fill the pointer s with b
 * @b: The constant byte
 * @s: Area pointed by s
 * Return: pointer of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

