#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to the name file
 * @text_content: pointer to string the content of thr file
 * Return: 1 if sucess -1 if not
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int len = 0;

	if (filename == NULL)
	return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		wr = write(fd, text_content, len);
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
