#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argv: pointer to an array of command line argument
 * @argc: number of commande line argument
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int money, i, result;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	result = 0;

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && money >= 0; i++)
	{
		while (money >= cents[i])
		{
			result++;
			money -= cents[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
