#include "main.h"
/**
 * swap_int - swaps two integers'
 *@a: interger to be swapped.
 *@b: second integer to be swapped.
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int *pa = &*a;
	int *pb = &*b;

	int temp = *a;
	*pa = *b;
	*pb = temp;
}
