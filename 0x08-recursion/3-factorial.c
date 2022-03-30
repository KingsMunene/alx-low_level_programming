#include "main.h"

/**
 * factorial - gives factorial of a given number
 * @n: the number
 * Return: 0 -1 or the factorial
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
