#include "main.h"

/**
 * print_octal - prints octal digits
 *
 * @args_list: argument list
 *
 * @format: format specifier
 *
 * Return: number of character printed
 */
int print_octal(const char *format, va_list args_list)
{
	int d = 0;
	int sum = 0;
	char octals[100];
	unsigned int num = va_arg(args_list, unsigned int);

	if (*format == 'l' || *format == 'h')
	{
		sum += length_modifier(format, args_list);
	}

	if (num == 0)
	{
		_putchar('0');
		sum++;
	}
	else
	{
		while (num > 0)
		{
			octals[d] = (num % 8) + '0';
			num /= 8;
			d++;
		}
		for (d = d - 1; d > 0; d--)
		{
			_putchar(octals[d]);
			sum++;
		}
	}
	return (sum);
}
