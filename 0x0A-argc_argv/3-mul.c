#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints results
 * @argc: Argument count
 * @argv: Argument array
 * Error: if arguments are not provided
 * 
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
  int a, b, ans;
  
if (argc > 1)
{
  a = atoi(argv[1]);
  b = atoi(argv[2]);

  ans = (a * b);
  
  printf("%d\n", ans);    

return (0);
}

printf("Error\n");

return (1);

}
