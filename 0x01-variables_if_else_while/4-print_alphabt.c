#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, exxcept for q and e.
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	puchar('\n');

	return (0);
}
