#include "main.h"

/**
 * flags_var - Flag character for non-custom specifiers
 *
 * @format: string to check for flag characters
 *
 * Return: number of characters printed
 */
void flags_var(const char *format)
{
	plus_flag = false;
	space_flag = false;
	hash_flag = false;
	zero_flag = false;
	minus_flag = false;

	while (*format == '+' ||
		*format == ' ' ||
		*format == '#' ||
		*format == '0' ||
		*format == '-')
	{
		if (*format == '+')
		{
			plus_flag = true;
		}

		else if (*format == ' ')
		{
			space_flag = true;
		}

		else if (*format == '#')
		{
			hash_flag = true;
		}

		else if (*format == '0')
		{
			zero_flag = true;
		}

		else if (*format == '-')
		{
			minus_flag = true;
		}

		format++;
	}
}
