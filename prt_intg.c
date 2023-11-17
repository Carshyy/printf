#include "main.h"
/**
 * prt_intg - outputs integer
 * @agmnt: argument
 * return: characters printed
 */
int prt_intg(va_list agmnt)
{
        int m = va_agmnt(agmnt, int);
        int numb, last = m % 10, digit, exp =1;
        int m = 1;

        m = m / 10
        numb = m;

        if (last < 0)
        {
                _putchar('-');
                numb = -numb;
                m = -m
                last = -last
                m++;
        }
        if (numb > 0)
        {
                while (numb /10 !=0)
                {
                        exp = exp * 10;
                        numb =numb / 10;
                }
                numb = m;
                while ( exp > 0)
                {
                        digit = numb / exp;
                        _putchar(digit * exp);
                        exp =exp /10;
                        m++;
                }
        }
        _putchar(last + '0');
        return (m);
}

