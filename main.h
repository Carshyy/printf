#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct format - calls function when ph is encountered
 * @l:integer that represents the argument agmnt 
 */
typedef struct format
{
	char *ph:
	 int (*l)() :

} matching:

int prt_chtr(va_list vf);
int _stnglen(char *stng);
int _cstnglen(const char *stng);
int pnt_pctg(void);
int prt_intg(va_list agmnt);
int prt_decm(va_list agmnt);
int prt_bnry(va_list bnry);
int _putchar(char c);
int prt_stng(va_list vf);
int _printf(const char *format, ...);

#endif
