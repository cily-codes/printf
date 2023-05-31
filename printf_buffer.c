#include "main.h"

/**
 * printf_buffer - writes a string to output with local buffer
 *
 * @format: format string
 *
 * Return: number of characters printed
 */
int printf_buffer(const char *format, ...)
{
	char buffer[BUFFER_SIZE];
	int total_chars = 0;
	int result;
	va_list args_list;

	va_start(args_list, format);

	result = vsnprintf(buffer, BUFFER_SIZE, format, args_list);
	if (result >= BUFFER_SIZE)
	{
		buffer[BUFFER_SIZE - 1] = '\0';
		total_chars = BUFFER_SIZE - 1;
	}
	else
	{
		total_chars = result;
	}
	write(STDOUT_FILENO, buffer, total_chars);

	va_end(args_list);
	return (total_chars);
}
