#include <stdio.h>
#include "main.h"
/**
 *_strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, len1 = 0;
	/*Get the length of dest */
	while (dest[len] != '\0')
		len++;

	/* Move the dest pointer to point at the null pointer
	 * append src to dest if the length is not greater than n
	 */
	while (src[len1] != '\0')
	{
		dest[len + len1] = src[len1];
		len1++;
	}

	return (dest);
}
