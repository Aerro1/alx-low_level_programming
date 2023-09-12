#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar func to print a-z
*/

int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
