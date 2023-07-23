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
	int i = 0, j, len, count = 0;

	char c;

	char *str;

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
			switch (format[i])
			{
				case 'c':
				{
					c = va_arg(args, int);
					_putchar(c);
					count++;
					break;
				}
				case 's':
				{
					str = va_arg(args, char *);
					for (j = 0; str[j] != '\0'; j++)
					{
						_putchar(str[j]);
						count++;
					}
					break;
				}
				case '%':
				{
					_putchar('%');
					count++;
					break;
				}
			};

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
