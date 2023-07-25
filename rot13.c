#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * rot13 - rotate string by 13 places
 *
 *
 *
*/
int rot13(va_list list)
{
	int i, j, count = 0;

	char *str;

	char *c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	str = va_arg(list, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				count += _putchar(rot[j]); 
			}
		}
		if (!rot[j])
		{
			count += _putchar(str[i]);
		}
	}
	return (count);
}	
