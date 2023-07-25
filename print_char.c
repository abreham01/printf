#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/*
 * print_char - prints char
 * @c: char to be printed
 *
 * Return: number of chars printed 
 */

int print_char(int c)
{
	return write(1, &c, 1);
}
