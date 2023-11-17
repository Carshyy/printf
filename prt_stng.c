#include "main.h"
/**
 * prt_stng - outputs a string
 * @vf: argument
 * Return: string length
 */
int prt_stng(va_list vf)
{
	char *stng;
	int k;
	int len;

	stng = va_arg(vf, char *);
	if (stng == NULL)
	{
		stng = "(null)";
		len = _stnglen(stng);
		for (k = 0; k < len; k++)
		_putchar(stng[k]);
		return (len);
	}
	else
	{
		len = _stnglen(stng);
		for (k = 0; k < len; k++)
		_putchar(stng[k]);
		return (len);
	}
}
