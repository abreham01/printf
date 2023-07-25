#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/*
 * print_string - Prints string
 * @str: pointer to string
 *
 * Return: number of chars printed 
 */

int print_string(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count += write(1, str++, 1);
	}

	return count;
}
