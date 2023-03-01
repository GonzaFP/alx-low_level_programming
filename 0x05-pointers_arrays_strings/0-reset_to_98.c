#include "main.h"
/**
* reset_to_98 - takes a pointer to an int
*  and updates the value it points to to 98
*@n: parameter it takes
*Return: nothing.
*/
void reset_to_98(int *n)
{
	int *pn = &*n;

	*pn = 98;
}
