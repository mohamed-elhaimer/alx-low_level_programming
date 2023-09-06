#include "main.h"
/**
 * append_text_to_file - unction that appends text at the end of a file
 * @filename: pointer to the name file
 * @text_content: ponter to the string that will be apppend to the file
 * Return: 1 if sucess -1 if not
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int len = 0;

	if (filename == NULL)
	return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
