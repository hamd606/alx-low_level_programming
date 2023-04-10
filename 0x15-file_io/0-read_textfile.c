#include "main.h"

/**
  * read_textfile - read a text file and prints it
  * @filename: text file
  * @letters: number of chars to reads
  * Return: number of chars printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len, len_w;
	char *buff;

	buff = malloc(sizeof(char *) * letters);

	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	len = read(fd, buff, letters);
	len_w = write(STDOUT_FILENO, buff, len);

	free(buff);
	close(fd);
	
	if (len != len_w)
		return (0);
	return (len);
}
