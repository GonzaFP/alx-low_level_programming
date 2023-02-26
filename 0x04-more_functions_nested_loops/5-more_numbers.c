#include "main.h"
/**
 * more_numbers - 10 times the numbers, from 0 to 14
 * void - inputs nothing
 * Return: 0
 */
void more_numbers(void)
{
	int a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + 48);
				_putchar((a % 10) + 48);
			}
			else
			{
				_putchar(a + '0');
			}
		}
		_putchar('\n');
	}
}
