#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * * main - print numbers 0 to 9
 * *
 * * Description: using the main function
 * * this program prints "0,1,2,3,4,5,6,7,8,9"
 * * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
