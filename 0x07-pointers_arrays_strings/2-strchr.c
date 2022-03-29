#include "main.h"
/**
 * *_strchr - locate a character in a string
 * @s: string to search
 * @c: char to find
 * Return: a pointer to the first occurrence of the character
 * c string
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	
	for (i = 0; *(s + i) != '\0'; i++)
		if(*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
