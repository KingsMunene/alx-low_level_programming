#include <stdio.h>

/**
 * main - receives and prints all arguments
 * @argc: the number of arguments
 * @argv: arguments array
 *
 * Return: Returns 0 for success
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
