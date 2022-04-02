#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins given change.
 * @argc: argument count
 * @argv: argument array
 * 
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
int count = 0;
int change;

if (argc != 2)
{
printf("Error\n");
return (1);
}

if (*argv[1] < 0)
{
printf("%i\n", 0);
}

change = atoi(argv[1]);

while (change >= 25)
{
change = change  - 25;
count++;
}

while (change >= 10)
{
change = change - 10;
count++;
}

while (change >= 5)
{
change = change - 5;
count++;
}

while (change >= 2)
{
change = change - 2;
count++;
}

while (change >= 1)
{
change = change - 1;
count++;
}
printf("%d\n", count);

return (0);
}

