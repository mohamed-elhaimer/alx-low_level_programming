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
	if (argc == 2)
	{
	int i, cent, money;

	cent = 0;
	money = atoi(argv[1]);
	int array[] = {25, 10, 5, 2, 1};
		for (i = 0; i < 5; i++)
		{
			if (money >= array[i])
			{
				cent = cent + money / array[i];
				money = money % array[i];
				if (money % array[i] == 0)
			{
				break;
			}
			}
		}
					printf("%d\n", cent);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
