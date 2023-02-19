# include <stdio.h>
# include <stdlib.h>
/**
 * main - prints both uppercase and lowercase alpha
 * Return: 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	for (lc = 'A'; lc <= 'Z'; lc++)
		putchar(lc);

	putchar('\n');
	return (0);
}
