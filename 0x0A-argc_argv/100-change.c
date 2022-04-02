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
if (argc != 2)
{
printf("Error\n");
return (1);
}
int coins = 0;
int change = atoi(argv[1]);


if (argv[1] < 0)
{
printf("%i\n", 0);
}

while (change >= 25)
{
change = change  - 25;
coins++;
}

while (change >= 10)
{
change = change - 10;
coins++;
}

while (change >= 5)
{
change = change - 5;
coins++;
}

while (change >= 2)
{
change = change - 2;
coins++;
}

while (change >= 1)
{
change = change - 1;
coins++;
}
printf("%d\n", coins);

return (0);
}

