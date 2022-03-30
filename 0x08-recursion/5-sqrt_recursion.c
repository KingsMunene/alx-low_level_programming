#include "main.h"

/**
 * _sqrt_recursion - returns natual square root of a number
 * @n: root of the number
 * Return: -1 
 */

int _sqrt_recursion(int n)
{
if ( n < 0)
return (-1);
return (natural_recursion(n, 1));
}

/**
 * natural_recursion - finds a natural square root
 * @n: number to get square root
 * @j: iterate
 *
 * Return: natural square root
 */

int natural_recursion(int n, int i)
{
int sqrt = i * i;

if (sqrt > n)

return (-1);
if (sqrt == n)
return (i);
return (natural_recursion(n, i + 1));
}

