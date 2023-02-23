# include "main.h"
/**
 *  _isalpha - checks aplhabet
 *  @c: character to print
 *  Return: 0 0r 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
