#include "main.h"

/**
 * length_mod_l - handles the 'l' length modifier for long int
 *
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int length_mod_l(va_list args_list)
{
	int sum = 0;
	long num = va_arg(args_list, long);

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
 * length_mod_h - handles the 'h' length modifier for short int
 *
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int length_mod_h(va_list args_list)
{
	int sum = 0;
	short num = (short)va_arg(args_list, int);

	if (num < 0)
	{
		_putchar('-');
		sum+;
		num = -num;
	}
	if (num / 10)
	{
		sum += print_recursive(num /10);
	}
	 _putchar((num % 10) + '0');
	 sum++;

	 return (sum);
}

/**
 * length_modifier - handles the length modifiers 'l' and 'h'
 *
 * @format: pointer to the format specifier
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int length_modifier(const char *format, va_list args_list)
{
	int sum = 0;

	if (format[1] == 'l')
	{
		format += 2;
		sum += length_mod_l(args_list);
	}
	else if (format[1] == 'h')
	{
		format += 2;
		sum += length_mod_h(args_list);
	}
	else
	{
		format++;
	}
	return (sum);
}
