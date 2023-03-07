#include "main.h"
/**
 * _strstr - searches a string for any of a set of bytes.
 * @haystack: string to search
 * @needle: string to match
 * Return: pointer to first occurance
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return ('\0');
}
