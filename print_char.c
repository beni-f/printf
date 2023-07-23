#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_char - prints char
 * @list: list
 *
 * Return: returns char length
*/
#define BUFFER_SIZE 1024

char buffer[BUFFER_SIZE];
int buffer_index = 0;

int print_char(va_list list)
{
	char c;
	
	c = va_arg(list, int);

	buffer[buffer_index++] = c;

	if (buffer_index >= BUFFER_SIZE) 
	{
        	flush_buffer();
    	}
	return 1;
}
