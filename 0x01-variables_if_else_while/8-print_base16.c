#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * * main - print all the numbers of base 16 in lowercase
 *  *   * *
 *    * * Description: using the main function
 *     * * this program prints "0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F"
 *      * * Return: 0
 *      
 *      */
int main(void)
{
	int n;
	char letter;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar (letter);
	putchar('\n');
	return (0);
}

