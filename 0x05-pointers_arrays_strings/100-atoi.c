#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */


int _atoi(char *s)
{
	int len, k, sign, number, negatives, nodigit;

	len = 0;
	k = 0;
	sign = 1;
	number = 0;
	negatives = 0;
	nodigit = 0;
	//Get the size of the string to be converted

	while (s[len] != '\0')
		len++;

	while (k < len && nodigit == 0)
	{
		//loop through the string checking for negative operators
	       if (s[k] == '-')
		       negatives++;
	       //check for numbers
	       if (s[k] >= '0' && s[k] <= '9')
	       {
/*update the int number to be returned
we multiply the number by ten to create an extra place value.
since number is zero it will start with place value one.
The next number will have two place value when multiplied by 10 and on and on...
Add the other digit found if any
we use (-'0') to convert char to int
*/
		       number = number * 10 + s[k] - '0';
//change the sign if its negative
		       if (negatives % 2)
			       sign = -1;
		       nodigit = 1;

		       if (s[k + 1] < '0' | s[k + 1] > '9')
			       break;
		       nodigit = 0;
	       }

	       k++;
	}
	if (nodigit == 0)
		return (0);

	return (number * sign);
}
