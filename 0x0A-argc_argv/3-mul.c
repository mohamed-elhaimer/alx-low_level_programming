#include<stdio.h>
#include<stdlib.h>

/**
 * main - print multiples of two numbers, followed by a new line
 * @argv: pointer to an array string passed to programe
 * @argc: number of commande line argument
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
