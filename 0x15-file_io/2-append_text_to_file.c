#include "main.h"

/**
 * append_text_to_file - function that append text to file
 * @filename: the filename to create
 * @text_content: content of the file
 * Return: the 1 on sucess (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	char *data = text_content;
	ssize_t byte;

	if (access(filename, F_OK) == -1)
		return (-1);
	if (access(filename, W_OK) == -1)
		return (-1);

	if (data != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);

		if (fd == -1)
			return (-1);

		byte = write(fd, data, strlen(data));

		if (byte == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

