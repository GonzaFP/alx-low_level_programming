# include <stdio.h>
# include <stdlib.h>
/**
 * main - base 16 in lower case
 * Return: 0
 */
int main(void)
{
	char hex;
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
