#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_string - prints string
 * @list: list
 * Return: returns string length
*/
int print_string(va_list list)
{
	char *str;
	
	int i, count = 0;

	str = va_arg(list, char *);

	if (str == NULL)
		return (-1);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}		
