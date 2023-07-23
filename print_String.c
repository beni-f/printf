#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int print_String(va_list list)
{
	int i, count = 0;

	char *str;

	str = va_arg(list, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			_putchar(str[i]);
			count++;
		}
		else
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += print_hexa_uppercase(*str);
		}
	}
	return (count);
}	
