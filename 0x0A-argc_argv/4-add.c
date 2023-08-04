#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}
			count++;
	}
	return (1);
}

/**
 * main - function to multiply argument pass
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (argc < 2)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (check_num(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
