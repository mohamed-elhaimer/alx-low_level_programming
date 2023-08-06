#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

/**
 * main - print addition of positives numbers
 * @argc: the numbers of arguments
 * @argv: pointer to array strings
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			return (printf("Error\n"), 1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
