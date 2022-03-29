#include "main.h"
/**
 * _strspn - Gets the length of the prefix of a substring
 * @s: initial segment
 * @accept: acceptedd bytes.
 * Return: number of bytes accepted.
 */
unsigned int _strspn(char *s, char *accept)
{
  int i, j, k, checker;

  f = 0;

  for (i = 0; s[i] != '\0'; i++)
    {
      flag = 0;
      for (j = 0; accept[j] != '\0'; j++)
	{
	  if (s[i] == accept[j])
	    {
	      k++;
	      checker = 1;
	    }
	}
      if (checker == 0)
	{
	  return (k);
	}
    }

  return (0);
}
