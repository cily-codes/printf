#include "main.h"

/**
 * print_a_char - Prints a character
 *
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int print_a_char(va_list args_list)
{
	int a;

	a = va_arg(args_list, int);
	_putchar(a);
	return (1);
}
