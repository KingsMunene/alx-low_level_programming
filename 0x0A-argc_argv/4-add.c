#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0 (success), 1 (fail)
 */

int main(int argc, char *argv[])
{
int i,j,k;
int sum = 0;

if (argc <= 0)
{
printf("%d\n", 0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; j != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
}

for (k = 0; k < argc; k++)
{
if (*argv[k] != '\0')
{
sum+=atoi(argv[k]);
return (0);

}
}
}
