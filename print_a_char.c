#include "main.h"

/**
 * print_a_char - Prints a character
 *
 * @args_list: argument list
 *
 * @format: format specifer
 *
 * Return: number of characters printed
 */
int print_a_char(const char *format, va_list args_list)
{
	int a;

	(void)(format);
	a = va_arg(args_list, int);
	_putchar(a);
	return (1);
}
