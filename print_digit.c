#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/*
 * print_digit - prints integer
 * @n: number to be printed
 * @base: number base system
 *
 * Return: number of chars printed 
 */

int print_digit(long n, int base)
{
	int count;
	char *symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return print_digit(-n, base) + 1;
	}

	else if (n < base)
	{
		return print_char(symbols[n]);
	}

	else
	{
		count = print_digit(n / base, base);
		return count + print_digit(n % base, base);
	}
}
