#include<stdio.h>

/**
 * main - print the numbers of arguments passed, followed by new line
 * @argc: int
 * @argv: list of arrays string
 * Return: 0-sucess, No zero-fail
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
