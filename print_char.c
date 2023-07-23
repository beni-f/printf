#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int print_char(va_list list)
{
	char c;
	
	int count = 0;

	c = va_arg(list, int);
	
	_putchar(c);
	count++;

	return (count);
}
