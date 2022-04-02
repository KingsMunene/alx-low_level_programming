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
while (argc >= 0)
printf("%s\n", *argv)
argc--;

printf("\n");

}

