/*
 * Task: 3-print_all.c
 */


#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);


/**
 * print_char - print char
 * @c: char to print
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}


/**
 * print_int - entry va_list like type
 * @i: integer to print
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}


/**
 * print_float - entry va_list like type
 * @f: float to print
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}


/**
 * print_string - entry va_list like type
 * @s: string to print
 */
void print_string(va_list arg)
{
	char *str;
	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}








/**
 * print_all - print anything followed by new line
 * @format: a string of characters representing the argument types
 * @...: variable number of args to be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
