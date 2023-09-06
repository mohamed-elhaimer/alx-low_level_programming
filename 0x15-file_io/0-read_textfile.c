#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it STDOUT
 * @filename: the file that will be read it from
 * @letters: number of byte will be read it
 * Return: number of byte read it
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
	return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}
