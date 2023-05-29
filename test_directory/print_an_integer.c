#include "main.h"

/**
 * print_recursive - recursive func for printing an integer
 *
 * @num: integer to print
 *
 * Return: number of character printed
 */
int print_recursive(int num)
{
	int sum = 0;

	if (num / 10)
	{
		sum += print_recursive(num / 10);
	}
	_putchar((num % 10) + '0');
	sum++;
	return (sum);
}

/**
 * print_an_integer - Prints an integer
 *
 * @args_list: argument list
 *
 * Return: the number of characters printed
 */
int print_an_integer(va_list args_list)
{
	int num = va_arg(args_list, int);
	int sum = 0;

	if (num < 0)
	{
		_putchar('-');
		sum++;
		num = -num;
	}
	if (num / 10)
	{
		sum += print_recursive(num / 10);
	}

	_putchar((num % 10) + '0');
	sum++;
	return (sum);
}
