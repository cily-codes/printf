#include "main.h"

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

	return (num);
}
