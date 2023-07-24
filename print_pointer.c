#include <stdarg.h>
#include "main.h"

int print_pointer(va_list list)
{
	void *ptr = va_arg(list, void *);

	unsigned long int value = (unsigned long int)ptr;

	char buffer[16];

	int i = 0, j, digit, count = 0;

	while (value != 0)
	{
		digit = value % 16;

		buffer[i] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
		value /= 16;
		
		i++;
	}

	if (value == 0)
	{
		_putchar('0');
		count++;
	}
	
	count += _putchar('0');
	count += _putchar('x');

	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar(buffer[i] + '0');
	}

	return (count);
}

