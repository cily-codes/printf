#include "main.h"

/**
 * print_recursive - recursive func for printing an integer
 *
 * @num: integer to print
 *
 * Return: number of character printed
 */
int print_recursive(int num)
{
	int sum = 0;

	if (num < 0)
	{
		_putchar('-');
		sum++;
		num = -num;
	}
	if (num / 10)
	{
		sum += print_recursive(num / 10);
	}
	_putchar((num % 10) + '0');
	sum++;
	return (sum);
}

/**
 * print_an_integer - Prints an integer
 *
 * @args_list: argument list
 * @format: format specifier
 *
 * Return: the number of characters printed
 */
int print_an_integer(const char *format, va_list args_list)
{
	int num = va_arg(args_list, int);
	int sum = 0;

	if (*format == 'l' || *format == 'h')
	{
		sum += length_modifier(format, args_list);
	}

	if (num < 0)
	{
		_putchar('-');
		sum++;
		num = -num;
	}
	if (num == -2147483648)
	{
		sum += printf_buffer("-2147483648");
		return (sum);
	}
	if (num / 10)
	{
		sum += print_recursive(num / 10);
	}

	_putchar((num % 10) + '0');
	sum++;
	return (sum);
}
