#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * * main - print all the numbers of base 16 in lowercase, followed by a new line.
 *   * *
 *    * * Description: using the main function
 *     * * this program prints "0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F"
 *      * * Return: 0
 *       */
int main(void)
{
	int n;
			
	for (n = 48; n < 102; n++)
	{
		if (n <= 57 && n >= 97)
		{
			putchar (n);
		}
	}
	putchar('\n');
	return (0);
}

