#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 * @format: string input that would be printed out
 * Return: the function returns the number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, len, count = 0, j, d, digits = 0, digit, temp;

	va_list args;

	if (format == NULL)
		return (-1);
	for (len = 0; format[len] != '\0'; len++)
		;
	va_start(args, format);
	while (i < len)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'i' || format[i] == 'd')
			{
				d = va_arg(args, int);
				if (d < 0)
				{
					d = -d;
					_putchar('-');
					count++;
				}
				temp = d;
				while (temp != 0)
				{
					temp = temp / 10;
					digits++;
				}
				for (j = digits - 1; j >= 0; j--)
				{
					digit = ((d / _pow(10, j)) % 10);
					_putchar(digit + '0');
					count++;
				}
			}

		}
		else if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
