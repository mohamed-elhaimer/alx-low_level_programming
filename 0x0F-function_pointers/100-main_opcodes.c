#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints the opcodes of its own main function
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	char *m;
	int i, nmbbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nmbbytes = atoi(argv[1]);
	if (nmbbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	m = (char *)main;
	for (i = 0; i < nmbbytes; i++)
	{
		if (i == nmbbytes - 1)
		{
			printf("%02hhx\n", m[i]);
			break;
		}
		printf("%02hhx ", m[i]);
	}
	return (0);
}
