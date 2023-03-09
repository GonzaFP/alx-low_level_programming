#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is needed
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int y;

	y = -1;
	if ((y % 2) == 0)
	{
		return (-1);
	}
	y += 2;
	return (1 + _sqrt_recursion(n - y));
}
