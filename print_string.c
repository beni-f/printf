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
	
	for (i = 0; str[i] != '\0'; i++)
	{
		append_char(str[i]);
		count++;
	}

	return (count);
}		
