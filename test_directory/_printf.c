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
	int (*func_point)(const char *, va_list);

	va_start(args_list, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			printf_buffer("%c", *format);
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
				case 'u':
					sum += print_unsigned_buffer(args_list);
					break;
				case 'o': 
					func_point = print_octal;
					break;
				case 'x':
					func_point = print_lower_hex;
					break;
				case 'X':
					func_point = print_upper_hex;
					break;
				case 'S':
					func_point = print_custom_string;
					break;
				case 'p':
					func_point = print_pointer;
					break;
				case '%':
					sum += printf_buffer("%%");
					break;
				default:
					if (*format == 'l' || *format == 'h')
					{
					sum += length_modifier(format, args_list);
					}
					break;
			}
			if (func_point != NULL)
			{
				flags_var(format);
				sum += func_point(format, args_list);
			}
		}
		format++;
	}
	va_end(args_list);
	return (sum);
}
