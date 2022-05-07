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
	char alphabets[10];
	alphabets[0] = 'A';
	alphabets[1] = 'B';
	alphabets[2] = 'C';
	alphabets[3] = 'D';
	alphabets[4] = 'E';
	alphabets[5] = 'F';
	alphabets[6] = 'G';
	alphabets[7] = 'H';
	alphabets[8] = 'I';
	alphabets[9] = 'J';
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
