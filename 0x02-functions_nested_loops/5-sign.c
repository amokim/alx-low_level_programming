#include "main.h"

/**
 * print_sign - fn that prints sign of the number
 * @n: number input
 * Return: 1 and pritn +
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}	
