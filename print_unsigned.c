#include "main.h"

/**
 * print_unsigned_buffer - prints an unsigned decimal with buffer
 *
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int print_unsigned_buffer(va_list args_list)
{
	unsigned int num = va_arg(args_list, unsigned int);

	return (printf_buffer("%u", num));
}

/**
 * print_unsigned - prints an unsigned decimal
 *
 * @args_list: argument list
 * @format: format specifier
 *
 * Return: number of characers printed
 */
int print_unsigned(const char *format, va_list args_list)
{
	int sum = 0;
	unsigned int num = va_arg(args_list, unsigned int);

	if (*format == 'l' || *format == 'h')
	{
		sum += length_modifier(format, args_list);
	}

	sum += print_recursive(num);

	return (sum);
}
