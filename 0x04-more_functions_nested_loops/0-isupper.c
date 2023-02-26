#include "main.h"
/**
*_isupper - function that checks for uppercase character.
* @c: The character to print
* Return: 1 if c is uppercase and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
