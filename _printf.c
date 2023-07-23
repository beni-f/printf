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
			if (format[i] == 'd' || format[i] == 'i')
				print_number(args);

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

int main(void)
{
	_printf("NUMBER: %d", 55);

	return (0);
}
