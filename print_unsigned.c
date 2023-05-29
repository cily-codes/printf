#include "main.h"


/**
 * print_unsigned_buffered - prints an unsigned decimal using buffered printing
 *
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int print_unsigned_buffer(va_list args_list)
{
	unsigned int num = va_arg(args_list, unsigned int);
	return printf_buffer("%u", num);
}

/**
 * print_unsigned - prints an unsigned decimal
 *
 * @args_list: argument list
 *
 * Return: number of characers printed
 */
int print_unsigned(va_list args_list)
{
	int sum = 0;
	unsigned int num = va_arg(args_list, unsigned int);

	sum += print_recursive(num);

	return (sum);
}
