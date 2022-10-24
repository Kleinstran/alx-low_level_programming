#include "main.h"

/**
  * print_rev - print strings in reverse
  *@s: input string.
  *Return: no return
  */
void print_rev(char *s)
{
	int i = '\0';

	while (*(s + i) != 0)
	{
		i--;
		_putchar(i);
	}

	_putchar('\n');
}
