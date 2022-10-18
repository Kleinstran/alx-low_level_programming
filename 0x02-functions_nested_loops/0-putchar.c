
#include "main.h"

/**
  * main - This program prints the phrase _putchar
  * Return: 0
  */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		putchar(ch[i]);
	}

	putchar('\n');
	return (0);
}
