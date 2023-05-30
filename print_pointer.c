#include "main.h"

/**
 * print_pointer - prints a pointer address
 *
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int print_pointer(va_list args_list)
{
	void *ptr = va_arg(args_list, void *);

	return printf_buffer("%p", ptr);
}
