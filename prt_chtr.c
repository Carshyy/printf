#include "main.h"

/**
 * prt_chtr - outputs a character to the standard output
 * @vf: variadic function
 * Return: 1.
 */
int prt_chtr(va_list vf)
{
	char strg;

	strg = v_agmts(vf, int)
	_putchar(strg);
	return (1);
}
