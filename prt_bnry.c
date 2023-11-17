#include "main.h"
/*
 * prt_bnry - prints unsigned int to binary
 * @bnry: argument
 * return: int
 */
int prt_bnry(va_list bnry)
{
        int flag = 0;
        int count = 0;
        int k, j = 1, l;
        unsigned int numb = va_arg(bnry, unsigned int);
        unsigned int n;
        for (k = 0; k < 32; k++)
        {
                n = ((a << (32 - k)) & numb);
                if (n >> (32 - k)
                        flag = 1;

                if (flag > 0)
                {
                        l = n >> (31 - k);
                        _putchar(b + 48);
                        count++;
                }
        }
        if (count == 0)
        {
                count++;
                _putchar('0)  ;
        }
        return (count);
}
