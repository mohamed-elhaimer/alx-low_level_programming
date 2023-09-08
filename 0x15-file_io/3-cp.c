#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed
 * @argv: double pointer
 * Return: the actual number of letters it could read and print
 */
int main(int argc, char **argv)
{
	int file1, file2, n;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((n = read(file1, buff, 1024)) > 0)
	{
		if (write(file2, buff, n) != n || file2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(98);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(98);
	}
	if (close(file2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(98);
	}
	return (0);
}