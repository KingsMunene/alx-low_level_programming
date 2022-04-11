#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy the string given to a newly allocated space in memory
 * @str: string to copy
 * Return: returns a pointer to the copy, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *pointer;
	unsigned int i, len;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		;
	len++;
	pointer = malloc(len * sizeof(char));

	if (!pointer)
		return (NULL);

	for (i = 0; i <= len; i++)
		pointer[i] = str[i];

	return (pointer);
}
