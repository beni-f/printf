#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_octal - prints octal
 * @list: list
 *
 * Return: returns the number of octals
*/
int print_octal(va_list list)
{
	unsigned int x;

	int count = 0, i = 0, j, octal[32];

	x = va_arg(list, unsigned int);

	if (x == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}

	while (x != 0)
	{
		octal[i] = x % 8;
		x /= 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octal[j] + '0');
		count++;
	}
	return (count);
}
