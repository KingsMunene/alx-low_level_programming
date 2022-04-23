#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses content of an array
 * @n: number of element of an array
 * @a: array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
