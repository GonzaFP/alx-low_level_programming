#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination memory
 * @src: source meonry
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *memory = dest;
	char *mem = src;

	for (i = 0; i < n; i++)
	{
		memory[i] = mem[i];
	}
	return (memory);
}
