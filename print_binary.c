#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/** 
 * print_binary - prints binary
 *
 * @list: list
 * Return: returns number of binary
*/
int print_binary(va_list list)
{
	int i = 0, j, count = 0, binary[32];
	
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0) 
	{
        	_putchar('0');
		count++;
        	return count;
	}
   
	while (num != 0) 
	{
        	binary[i] = num % 2;
        	num = num / 2;
        	i++;
    	}
    	for (j = i - 1; j >= 0; j--) 
	{
        	_putchar(binary[j] + '0');
		count++;
    	}
    return (count);
}
