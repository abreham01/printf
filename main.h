#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int specifier_identifier(char specifier, va_list ap);
int print_char(int c);
int print_string(char *str);
int print_digit(long n, int base);

#endif

