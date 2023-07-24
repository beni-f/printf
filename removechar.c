#include <stdio.h>
#include "main.h"

void remove_char(char *str, char c)
{
	int i, count;

	for (count = 0; str[count] != '\0'; count++)
		;

	for (i = 0; i < count; i++)
	{
		if (str[i] != c)
		{
			_putchar(str[i]);
		}
	}
}
