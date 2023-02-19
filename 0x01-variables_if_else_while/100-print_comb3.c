# include <stdio.h>
# include <stdlib.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			if (x != y)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
			}
			if (x + y < 17)
			{
				putchar (',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}


