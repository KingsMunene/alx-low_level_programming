#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two string
 * @s1: first string
 * @s2: second string
 * Return: returns a pointer to the concatenated strings, or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int x, len1 = 0, len2 = 0;

	if (!s1)
		s1 = "";
	else
		for (; s1[len1]; len1++)
			;
	if (!s2)
		s2 = "";
	else
		for (; s2[len2]; len2++)
			;
	len2++;
	ptr = malloc((len1 + len2) * sizeof(char));

	if (!ptr)
		return (NULL);

	for (x = 0; x <= (len1 + len2); x++)
	{
		if (x < len1)
			ptr[x] = s1[x];
		else
			ptr[x] = s2[x - len1];
	}

	return (ptr);
}
