#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to the name file
 * @text_content: pointer to string the content of thr file
 * Return: 1 if sucess -1 if not
*/
int create_file(const char *filename, char *text_content)
{
	int fp;
	int wr;
	int l;

	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
		l = strlen(text_content);

		fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		wr = write(fp, text_content, l);
		if (wr == -1 || fp == -1)
		return (-1);
	}
	close(fp);
	return (1);
}
