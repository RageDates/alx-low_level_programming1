#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - entry point for the function
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, nb, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		nb = atoi(argv[i]);
		if (nb > 0)
			sum += nb;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (sum);
}
