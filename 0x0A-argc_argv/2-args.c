#include<stdio.h>

/**
 * main - print all arguments passed to programe, followed by new line
 * @argv: pointer to an array of command line argument
 * @argc: counter of number of strings passed to programme
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
