#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two numbers
 * @argc: argument count
 * @argv: argument array
 * Return: 1 (fail) 0 (success)
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("%d\n", 0);
}

if (*argv[1] > '9' || *argv[2] > '9')
{
printf("Error\n");

return (1);
}

if (atoi(argv[1]) >= 0 && atoi(argv[2]) >= 0)
{
printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
return (0);
}
}

