#include "main.h"
/**
 * read_textfile - function to reads a text file and prints it
 * @filename: the file to be read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t bytes;
	size_t total_byte_w = 0;
	char *mychar = malloc(sizeof(char) * letters);

	if (mychar == NULL)
		return (0);
	if (fd == -1)
		return (0);

	while (total_byte_w < letters &&
		(bytes = read(fd, mychar + total_byte_w,
		letters - total_byte_w)) > 0)
	{
		ssize_t write_byte = write(STDOUT_FILENO, mychar +
				total_byte_w, bytes);

		if (write_byte == -1 || write_byte != bytes)
		{
			free(mychar);
			close(fd);
			return (0);
		}

		total_byte_w += write_byte;
	}
	free(mychar);

	close(fd);

	if (bytes == -1)
		return (-1);

	return (total_byte_w);
}


