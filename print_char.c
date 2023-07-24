#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_char - prints char
 * @list: list
 *
 * Return: returns char length
*/
int print_char(va_list list)
{
	char c, count = 0;
	
	c = va_arg(list, int);

	_putchar(c);
	
	count++;
	
	return (count);
}
