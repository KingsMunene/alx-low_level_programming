#include "main.h"
/**
 * * _strchr - Locates char and returns pointer
 * @s: string
 * @c: character
 * Return: the pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
		return (s + i);
	if (*(s + i) == c)
		return (s + i);
		return ('\0');
}

