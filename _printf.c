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

/**
 * print_a_string - Prints a string
 *
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int print_a_string(va_list args_list)
{
	int sum = 0;
	char *string;

	string = va_arg(args_list, char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	while (*string != '\0')
	{
		_putchar(*string);
		sum++;
		string++;
	}
	return (sum);
}

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
 * @args_list:argument list
 *
 * Return: the number of characters printed
 */
int print_an_integer(va_list args_list)
{
	int num = va_arg(args_list, int);
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
 * _printf - function that produces output according to a format
 *
 * @format: character string
 *
 * Return: the number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...)
{
	va_list args_list;
	int sum = 0;
	int (*func_point)(va_list);

	va_start(args_list, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			sum++;
		}
		else
		{
			format++;
			func_point = NULL;

			switch (*format)
			{
				case 'c':
					func_point = print_a_char;
					break;
				case 's':
					func_point = print_a_string;
					break;
				case '%':
					_putchar('%');
					sum++;
					break;
			}
			if (func_point != NULL)
			{
				sum += func_point(args_list);
			}
		}
		format++;
	}
	va_end(args_list);
	return (sum);
}
