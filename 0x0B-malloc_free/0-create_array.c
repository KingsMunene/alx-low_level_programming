#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a char
 * @Size: size of array
 * @: the char
 * Return: Returns a pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *pointers;
	unsigned int i;

	if (size == 0)
		return (NULL);
	pointers = (char *)malloc(sizeof(char) * size);

	if (pointers == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		pointers[i] = c;
	return (pointers);
	
}
