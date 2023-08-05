#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to calculate change with cent
 * @argc: number of argument
 * @argv: argument pass
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int coincount, largestcoin, index, change;
	int coin [5] = {25, 10, 5, 2, 1};

	coincount = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	index = 0;
	if (change < 0)
	{
		printf("%d\n", coincount);
	}
	else
	{
		while (change > 0)
		{
			if (coin[index] <= change)
			{
				largestcoin = coin[index];
				change -= largestcoin;
				coincount++;
			}
			else
			{
				index++;
			}
		}
		printf("%d\n", coincount);
	}
	return (0);
}

