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
int print_a_char(const char *format, va_list args_list);
int print_a_string(const char *format, va_list args_list);
int print_an_integer(const char *format, va_list args_list);
int print_recursive(int num);
int print_in_binary(const char *format, va_list args_list);
int print_unsigned(const char *format, va_list args_list);
int print_unsigned_buffer(va_list args_list);
int print_octal(const char *format, va_list args_list);
int print_lower_hex(const char *format, va_list args_list);
int print_upper_hex(const char *format, va_list args_list);
int printf_buffer(const char *format, ...);
int print_custom_string(const char *format, va_list args_list);
int print_pointer(const char *format, va_list args_list);
void flags_var(const char *format);
int length_mod_l(va_list args_list);
int length_mod_h(va_list args_list);
int length_modifier(const char *format, va_list args_list);

#endif
