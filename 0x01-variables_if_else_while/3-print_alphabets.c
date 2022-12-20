#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int a;

	for (n = 97; n < 123; n++)
	{
		putchar(n);
	}

	for (a = 65; a < 91; a++)
	{
		putchar(a);
	}

	putchar(10);
	return (0);
}
