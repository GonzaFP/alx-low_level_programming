#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		return (i);
	}
	i++;
	return (i + _strlen_recursion(s + 1));
}
