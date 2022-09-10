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
	int e;
	int q;

	e= 'e';
	q= 'q';
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	  /* your code goes there */
	for (n = 'a'; n <= 'z'; n++)
	{
		if (n!=e && n!=q)
		{
		putchar (n);
		}
	}
	putchar('\n');
	return (0);
}
