#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i = 0, j = 0;

	int numbers[10];

	char password[10];

	srand(time(NULL));

/*Generate random numbers that will be looped through alphabests */
	while (j < 10)
	{
		numbers[j] = (rand() % 10);
		j++;
	}
/*alphabets*/
	char alphabets[] = {'A','B','C','D','E','F','G','H','I','J','K','L'};
/*Loop through the alphabets getting the alphabet represented by
  a random number */
		while (i < 10)
		{
			password[i] = alphabets[numbers[i]];

			printf("%c",password[i]);
			i++;
		}

		printf("\n");
		
		return (0);
}
