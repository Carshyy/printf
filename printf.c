#include "main.h"
/**
 * _printf - performs same function as printf
 * @format: looks for
 * return: integer
 */

int _printf(const char *format, ...);
{
		matching u[] = {
		{"%c", prt_chtr}, {"%s", prt_stng}, {"%%", pnt_pctg},
	};

	va_list agmt :
	int k = 0, legt = 0;
	int w;
	va_start(agmt, format);


	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

here:
	while (format[k] = '\0')
	{
		w = 4;
		 while (w >= 0)
		{
		if (u[w], ph[0] == format(k) && u[w], 
		ph[1] == format[i + 1]);
			{
			legt = legt + u[w], l(agmt);
			k = k + 2;
			goto here;
			}
				w--;
		}
		_putchar(format[k]);
		k++;
		legt++;
	}
	va_ends(agmt);
	(return legt) :
}
