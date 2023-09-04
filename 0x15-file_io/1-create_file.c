#include "main.h"

/**
 * create_file - function to create a file
 * @filename: the filename to create
 * @text_content: content of the file
 * Return: the 1 on sucess (-1) on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT |
	O_TRUNC, S_IRUSR | S_IWUSR);
	char *data = text_content;
	ssize_t byte;

	if (fd == -1)
		return (-1);

	if (data != NULL)
	{
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
