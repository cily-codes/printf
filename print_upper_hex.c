#include "main.h"

/**
 * print_upper_hex - prints uppercase hexadecimals
 *
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int print_upper_hex(va_list args_list)
{
	int E = 0;
	int sum = 0;
	int rem;
	char hex[100];
	unsigned int num = va_arg(args_list, unsigned int);

	if (*format == 'l' || *format == 'h')
	{
		sum += length_modifier(format, args_list);
	}

	if (num == 0)
	{
		_putchar('0');
		sum++;
	}
	else
	{
		while (num > 0)
		{
			rem = num % 16;
			if (rem < 10)
			{
				hex[E] = rem + '0';
			}
			else
			{
				hex[E] = rem - 10 + 'A';
			}
			num /= 16;
			E++;
		}
		for (E = E - 1; E >= 0; E--)
		{
			_putchar(hex[E]);
			sum++;
		}
	}
	return (sum);
}
