#include<stdio.h>
#include <unistd.h>
/**
 * main - prints characters using putchar
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	return (1);
}
