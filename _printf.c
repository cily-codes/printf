#include "main.h"

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
				case 'd':
				case 'i':
					func_point = print_an_integer;
					break;
				case 'b':
					func_point = print_in_binary;
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
