#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: list pf argument
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int first, second, result;
	char *op;
	int (*mycalc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first = atoi(argv[1]);
	op = argv[2];
	second = atoi(argv[3]);

	mycalc = get_op_func(op);

	if ((*op == '/' || *op == '%') && (second == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (*op != '+' && *op != '-' && *op != '/' && *op != '*' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	result = mycalc(first, second);

	printf("%d\n", result);
	return (0);
}
