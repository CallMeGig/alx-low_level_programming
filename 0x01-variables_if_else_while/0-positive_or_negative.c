#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints whether the number stored in "n" is positive or negative
*
* Description: This program assigns a random number to the variable n and
* prints whether the number is positive, negative or is equal to 0.
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
