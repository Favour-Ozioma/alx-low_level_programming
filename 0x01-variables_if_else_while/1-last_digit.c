#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * * main - print if the number is postive, zero, or negative
 * *
 * * Description: using the main function
 * * this program prints "Programming is positive, zero, or negative
 * * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	  /* your code goes there */
	int ld;
	if (n > 5)
	{
		printf("Last digit of %d is %ld and is greater than 5\n", n, ld);
	}
	else if (n == 0)
	{
		printf("Last digit of $d is %ld and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %ld and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
