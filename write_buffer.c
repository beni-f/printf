#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char buffer[BUFFER_SIZE];
int buffer_index = 0;

void write_buffer()
{
	write(1, buffer, buffer_index);
	buffer_index = 0;
}

void append_char(char c) 
{
	buffer[buffer_index++] = c;

	if (buffer_index >= BUFFER_SIZE)
	{
        	write_buffer();
	}
}
