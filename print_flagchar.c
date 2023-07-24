#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int print_sign(va_list list)
{
	int count = 0, x;

	x = va_arg(list , int);

	if (x > 0)
	{
		count += _putchar('+');

		count += print_number(x);
	}
	else if (x == 0)
	{
		count += _putchar('0');
	}
	else
		count += print_number(x);

	return (count);
}

int print_space(va_list list)
{
	int count = 0, x;

	x = va_arg(list, int);

	if (x >= 0)
	{
		count += _putchar(' ');
		count += print_number(x);
	}
	else
		count += print_number(x);

	return (count);
}

int print_hashflag(va_list list)
{
	int count = 0;

	unsigned int x;

	x = va_arg(list, unsigned int);

	count += _putchar('0');
	count += _putchar('x');
	
	count += print_number(x);

	return (count);
}
