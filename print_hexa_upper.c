#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_hexa_uppercase - prints hexadecimal
 * @list: list
 * Return: retruns length of hexadecimal
*/
int print_hexa_uppercase(va_list list)
{
	unsigned int x;

	int i = 0, j, count = 0;
	char hexa[32];

	x = va_arg(list, unsigned int);

	if (x == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	while (x != 0)
	{
		hexa[i] = x % 16;

		if (hexa[i] > 10)
		{
			hexa[i] = hexa[i] - 10 + 'A';
		}
		x /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (hexa[j] < 10)
		{
			_putchar(hexa[j] + '0');
			count++;
		}
		else
		{
			_putchar(hexa[j]);
			count++;
		}
	}
	return (count);
}
