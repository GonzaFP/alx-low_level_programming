#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: This is the main C string to be scanned
 * @accept: This is the string containing the lis
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n;

	n = 0;

	for (j = 0; s[j]; j++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == s[j])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
	}
	return (n);
}
