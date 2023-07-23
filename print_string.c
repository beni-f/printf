#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int print_string(va_list list);
{
	char *str;
	
	int i;

	str = va_arg(list, char *);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}		
