#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 *  including the terminating null byte (\0),
 *   to the buffer pointed to by dest.
 *   @dest: destination bufffer
 *   @src: source string
 *   Return: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i, j, n;

	n = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		n++;
	}
	for (j = 0; j <= n + 1; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
