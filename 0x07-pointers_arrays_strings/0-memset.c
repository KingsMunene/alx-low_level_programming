/**
 *_memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 *@n: The number of times to fill the pointer s with b
 *@b: The constant byte
 *@s: Area pointed by s
 */

char *_memset(char *s, char b, unsigned int n)
{
  int i;

  for (i = 0; i < n; i++)
    {
      s[i] = b;
    }
  return (s);
}
