#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - Prints like a printf
 * @format: format specifier
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	va_start(ap, format);
	count = 0;

	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}

	while (*format)
	{
		if (*++format == '%')
		{
			count += _purchar('%');
			continue;
		}

		if (*format == '%')
		{
			count += specifier_identifier(*++format, ap);
		}
		else
		{
			count += write(STDOUT_FILENO, format, 1);
		}

		++format;
	}

	va_end(ap);

	return (count);
}
