#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers 1 to 100 replacing multiples
 * of 3 and 5 with "Fizz" and "Buzz" respectively. For
 * multiples of both replace with "FizzBuzz"
 * Return: Always 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);

		if (i % 3 == 0)
		{
			printf("Fizz");
		}

		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
