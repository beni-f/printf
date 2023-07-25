#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * reverse_string - prints the reverse of a string
 *
 * @list: list
 * Return: returns the number of characters
*/
int reverse_string(va_list list)
{
	char *str;

	int i, len, count = 0;

	str = va_arg(list, char *);

	for (len = 0; str[len] != '\0'; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		count += _putchar(str[i]);
	}
		
	return (count);
}	
