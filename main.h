#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_a_char(va_list args_list);
int print_a_string(va_list args_list);
int print_an_integer(va_list args_list);
int print_recursive(int num);
int print_in_binary(va_list args_list);
int print_unsigned(va_list args_list);

#endif
