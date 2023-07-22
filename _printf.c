#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 *
 * @format: string input that would be printed out
 *
 * Return: the function returns the number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, len, count = 0, j;
		
	int d, digits = 0, divisor = 1, digit, temp;
	
	va_list args;

	if (format == NULL)
		return (-1);
	
	for (len = 0; format[len] != '\0'; len++)
		;

	va_start(args, format);

	while(i < len)
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
				while (temp / 10)
				{
					temp = temp / 10;
					digits++;
				}
				for (j = 1; j < digits; j++)
					divisor *= 10;

				while (divisor != 0)
				{
					digit = d % divisor;
				        _putchar(digit + '0');
					count++;
					divisor /= 10;
					d %= divisor;	
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

int main(void)
{
	_printf("Numbers: %i %d", 100, 11);

	return (0);
}
