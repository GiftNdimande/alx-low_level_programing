#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 1;
		for (a = 1; a < 3; a++)
		{
			b *= atoi(argv[]);
		}
		printf("%d\n", j);
	}
	return (0);
}
