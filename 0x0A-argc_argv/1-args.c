#include <stdio.h>
/**
 * main - prints number og arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argv[argc - 1] == argv[i])
	{
		printf("%d\n", i);
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
