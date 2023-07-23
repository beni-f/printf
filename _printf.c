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
	int i = 0, len, count = 0;

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
			if (format[i] == 'x')
			{
				count += print_hexa_lowercase(args);
			}
			if (format[i] == 'X')
			{
				count += print_hexa_uppercase(args);
			}
			if (format[i] == 'd' || format[i] == 'i')
			{
				count += print_number(args);
			}
			switch (format[i])
			{
				case 'c':
				{
					count += print_char(args);
					break;
				}
				case 's':
				{
					count += print_string(args);
					break;
				}
				case 'b':
				{
					count += print_binary(args);
					break;
				}
				case 'o':
				{
					count += print_octal(args);
					break;
				}
				case 'u':
				{
					count += print_unsigned(args);
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
	write_buffer(void);
	return (count);
}
