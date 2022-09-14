/*
 * Auth: Favour D Ozioma
 */

#include "main.h"


/**
 * print_alphabet_x10 - Prints the alphabet x10 in lower case
 *
 */

void print_alphabet_x10(void)
{
	char faozio;
	char azundu;

	faozio = 0;
	while (faozio <= 9)
	{
		azundu = 'a';
		while (azundu <= 'z')
		{
			_putchar(azundu);
			azundu++;
		}
		faozio++;
		_putchar('\n');
	}

}
