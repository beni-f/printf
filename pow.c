#include "main.h"
#include  <stdio.h>
/**
 * _pow_recursion - create a pow function using recursion
 *
 * @x: integer input
 * @y: integer input
 *
 * Return: returns integer
*/
int _pow(int x, int y)
{
	if (y ==  1)
	return (x);
	if (y == 0)
	return (1);

	if (y > 1)
	{
		--y;

		return (x * _pow(x, y));
	}
	else
		return (-1);
}
