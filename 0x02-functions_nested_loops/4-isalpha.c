#include "main.h"

/**
 * _isalpha - fn that checks for alphabets
 *
 * Return: 1 if c is a letter
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
