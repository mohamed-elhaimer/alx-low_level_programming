#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - main function
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i, j, reslt;
	char opr;
	int (*fct)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	fct = get_op_func(argv[2]);
	if (!fct)
	{
		printf("Error\n");
		exit(99);
	}
	opr = *argv[2];
	if (j == 0 && (opr == '%' || opr == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	reslt = fct(i, j);
	printf("%d\n", reslt);
	return (0);
}
