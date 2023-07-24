#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_number - prints integer
 * @list: list
 *
 * Return: returns number length
*/
int print_number(int d)
{
	int j, count = 0, digits = 0, temp, digit;

       	if (d < 0)
        { 
		d = -d;
                _putchar('-');
		count++;
        }
	temp = d;
	while (temp != 0)
        {
		temp = temp / 10;
		digits++;
        }
        for (j = digits - 1; j >= 0; j--)
       	{
       		digit = ((d / _pow(10, j)) % 10);
		_putchar(digit + '0');
		count++;
       }
	return (count);
}
