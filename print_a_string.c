#include "main.h"

/**
 * print_a_string - Prints a string
 *
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int print_a_string(const char *format, va_list args_list)
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
		_putchar(*string);
		sum++;
		string++;
	}
	return (sum);
}
