#include "main.h"

/**
 * _putchar - outputs character c to standard output
 *  @c: character to be outputed
 *  Return: on success,1. On error -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
