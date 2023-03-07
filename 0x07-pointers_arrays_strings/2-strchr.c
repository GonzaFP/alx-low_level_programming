#include "main.h"
/**
 *_strchr -  locates a character in a string.
 *@s:  original string within which the character is to be found.
 *@c: variable represents a character in the string
 * Return: pointer to chracter
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
