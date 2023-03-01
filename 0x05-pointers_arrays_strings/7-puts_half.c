#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string
 * Return: 0
 */
void puts_half(char *str)
{
	int i, j, length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	if ((length % 2) == 0)
	{
		for (j = length / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (length - 1) / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
