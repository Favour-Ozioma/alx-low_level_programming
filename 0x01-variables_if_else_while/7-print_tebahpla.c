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
	for (n = 'z'; n <= 'a'; n--)
	{
		putchar (n);
	}
	putchar('\n');
	return (0);
}