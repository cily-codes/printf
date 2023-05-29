#include "main.h"

/**
 * print_binary - prints an unsigned integer in binary
 *
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int print_in_binary(va_list args_list)
{
	int b = 0;
	int c;
	int sum = 0;
	int binary[32];
	unsigned int num = va_arg(args_list, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		sum++;
	}
	else
	{
		b = 0;

		while (num > 0)
		{
			binary[b] = num % 2;
			num /= 2;
			b++;
		}

		for (c = b - 1; c >= 0; c--)
		{
			_putchar(binary[c] + '0');
			sum++;
		}
	}
	return (sum);
}
