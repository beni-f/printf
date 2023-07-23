#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void flush_buffer()
{
	char buffer[BUFFER_SIZE];

	int buffer_index = 0;

	write(1, buffer, buffer_index);
	buffer_index = 0;
}

