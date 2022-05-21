#ifndef VARIADIC_FUNCTIONSH
#define VARIADIC_FUNCTIONSH
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct printTypeStruct - struct definition of entry sign
 * @t: type of arg
 * @f: function to print type of args
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

#endif /*VARIADIC_FUNCTIONSH*/
