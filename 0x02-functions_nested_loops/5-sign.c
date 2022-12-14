/*
 * Auth: Favour D Ozioma
 */

#include "main.h"


/**
 * print_sign - Prints the sign of a given number
 *
 * @n: The character to be checked.
 *
 * Return: 1 if character is +ve, 0 if character is zero and -1 when -ve.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
