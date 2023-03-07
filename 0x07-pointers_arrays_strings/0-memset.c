#include "main.h"
/**
 * _memset -  function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: Starting address of memory to be filled
 * @b: Value to be filled
 * @n: Number of bytes to be filled starting
 * Return:a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	char *memory = s;

	for (j = 0; j < n; j++)
	{
		memory[j] = b;
	}
	return (memory);
}
