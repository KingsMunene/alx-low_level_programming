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
int i, j, k;

int sum = 0;

if (argc < 0)
{
printf("%d\n", 0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
}
}
for (k = 1; k < argc; k++)
{
if (k != '\0')
sum+=atoi(argv[k]);
}
printf("%i\n", sum);
return (0);
}
