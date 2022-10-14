#include <stdio.h>
/**
 * main - print the alphabet in lower cases
 *
 * Return: Always 0.
 */
int main(void)
{
	char letta;

	for (letta = 'a' ; letta <= 'z' ; letta++)
	{
		if (letta != 'e' && letta != 'q')
			putchar(letta);
	}

	putchar('\n');

	return (0);
}
