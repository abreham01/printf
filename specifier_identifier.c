#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * specifier_identifier - identifies which conversion specifier is provided
 * @specifier: flag
 * @ap: pointer
 *
 * Return: number of characters printed
 */

int specifier_identifier(char specifier, va_list ap)
{
	int count = 0;

	if (specifier == 'c')
	{
		count += print_char(va_arg(ap, int));
	}

	else if (specifier == 's')
	{
		count += print_string(va_arg(ap, char *));
	}

	else if (specifier == 'd' || specifier == 'i')
	{
		count += print_digit((long)va_arg(ap, int), 10);
	}

	else if (specifier == 'b')
	{
		count = print_digit((long)va_arg(ap, unsigned int), 2);
	}

	else if (specifier == 'x')
	{
		count = print_digit((long)va_arg(ap, unsigned int), 16);
	}

	else if (specifier == 'o')
	{
		count = int print_octal((long)va_arg(ap, unsigned int));

	else
	{
		count += write(1, &specifier, 1);
	}

	return (count);
}
