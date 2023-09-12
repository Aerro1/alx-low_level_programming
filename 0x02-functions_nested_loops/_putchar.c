#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @C: the character to print
 *
 * Return: on success 1.
 *	on error, -1 is returned, and errno is set approproately
*/
int _putchar(char C)
{
	return (write(1, &C, 1));
}
