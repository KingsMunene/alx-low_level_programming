#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: parameter one
 * @s2: second parameter
 * Return: 0 if equal or b if not
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
