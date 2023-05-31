#include "main.h"

/**
 * print_pointer - prints a pointer address
 *
 * @args_list: argument list
 * @format: format specifier
 *
 * Return: number of characters printed
 */
int print_pointer(const char *format, va_list args_list)
{
	void *ptr = va_arg(args_list, void *);

	(void)(format);
	return (printf_buffer("%p", ptr));
}
