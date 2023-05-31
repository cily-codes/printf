#include "main.h"

/**
 * print_custom_string - Prints a custom string
 *
 * @args_list: argument list
 *
 * @format: format specifier
 *
 * Return: number of characters printed
 */
int print_custom_string(const char *format, va_list args_list)
{
	int sum = 0;
	char *string;

	(void)(format);
	string = va_arg(args_list, char *);
	if (string == NULL)
	{
		string = "(null)";
	}

	while (*string != '\0')
	{
		if (*string < 32 || *string >= 127)
		{
			sum += printf_buffer("\\x%02X", (unsigned char)*string);
		}
		else
		{
			_putchar(*string);
			sum++;
		}
		string++;
	}
	return (sum);
}
