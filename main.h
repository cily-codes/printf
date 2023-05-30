#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

extern bool plus_flag;
extern bool space_flag;
extern bool hash_flag;
extern bool zero_flag;
extern bool minus_flag;

int _putchar(char c);
int _printf(const char *format, ...);
int print_a_char(va_list args_list);
int print_a_string(va_list args_list);
int print_an_integer(va_list args_list);
int print_recursive(int num);
int print_in_binary(va_list args_list);
int print_unsigned(va_list args_list);
int print_unsigned_buffer(va_list args_list);
int print_octal(va_list args_list);
int print_lower_hex(va_list args_list);
int print_upper_hex(va_list args_list);
int printf_buffer(const char *format, ...);
int print_custom_string(va_list args_list);
int print_pointer(va_list args_list);
void flags_var(const char *format);

#endif
