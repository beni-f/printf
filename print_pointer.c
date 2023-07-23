#include "main.h"
#include <inttypes.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_pointer - prints pointer/address
 *
 * @list: list
 *
 * Return: the number of characters
*/
int print_pointer(va_list list)
{
	int count = 0;

	void *ptr = va_arg(list, void *);

	uintptr_t ptr_value = (uintptr_t)ptr;
	
	count += _putchar('0');
	count += _putchar('x');
	count += print_hexa_uppercase(ptr_value);

	return (count);
}
