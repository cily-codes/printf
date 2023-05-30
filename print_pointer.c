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
	int sum = 0;
	void *ptr = va_arg(args_list, void *);
	unsigned long int address = (unsigned long int)ptr;

	sum += printf_buffer("0x%lx", address);

	return (sum);
}
