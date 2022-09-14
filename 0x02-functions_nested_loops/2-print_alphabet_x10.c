/*
 * Auth: Favour D Ozioma
 */

#include "main.h"


/**
 * print_alphabet - Prints the alphabet x10 in lower case
 *
 */

void print_alphabet(void)
{
	char faozio;
	char azundu;
	faozio = 0;

	while(faozio <= 10)
	{
		azundu = 'a';
		while(azundu <= 'z') 
		{
			azundu +++;
		}
		faozio++;
		_putchar(faozio);
	}
	_putchar('\n');

}
