#include "main.h"
/**
 * _puts - prints a string
 *@s:string
 *Return: 0
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
