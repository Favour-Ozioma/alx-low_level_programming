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
	int m;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	  /* your code goes there */
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar (n);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar (m);
	}
	putchar('\n');
	return (0);
}
