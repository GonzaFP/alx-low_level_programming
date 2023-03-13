#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - multiplies two numbers.
 * print the result of the multiplication, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: should print Error, followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", mul);
	}
	return (0);
}
