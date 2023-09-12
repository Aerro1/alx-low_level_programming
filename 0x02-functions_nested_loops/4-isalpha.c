#include "main.h"

/**
 * _islower - function to check if character is lowercase or uppercase
 *
 * @c: checks input from other function
 *
 * Return: return 1 if true
 *	otherwise always 0 (success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
