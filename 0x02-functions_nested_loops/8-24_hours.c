# include "main.h"
/**
 * jack_bauer - prints his day
 * @void: no return
 * Return: 0
 */
void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar(x + '0');
			_putchar(x + '0');
			_putchar(':');
			_putchar(y + '0');
			_putchar(y + '0');
			_putchar('\n');
		}
	}
}


