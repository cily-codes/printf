#include "main.h"

/**
 * print_lower_hex - prints lowercase hexadecimals
 *
 * @args_list: argument list
 *
 * Return: number of characters printed
 */
int print_lower_hex(va_list args_list)
{
	int rem;
	int e = 0;
	int sum = 0;
	char hex[100];
	unsigned int num = va_arg(args_list, unsigned int);

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
				hex[e] = rem + '0';
			}
			else
			{
				hex[e] = rem - 10 + 'a';
			}
			num /= 16;
			e++;
		}
		for (e = e - 1; e >= 0; e--)
		{
			_putchar(hex[e]);
			sum++;
		}
	}
	return (sum);
}
