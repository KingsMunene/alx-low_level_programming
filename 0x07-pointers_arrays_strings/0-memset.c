#include "main.h"
/**
 * * _memset - function fills the first n bytes of the memory area pointed to by s
 * @s: pointed by s
 * @b: Constant byte b
 * @n: The number of times to fill the pointer
 * Return: pointer of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

