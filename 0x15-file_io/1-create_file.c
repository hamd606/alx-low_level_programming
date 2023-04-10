#include "holberton.h"

/**
  * create_file - creates a text file with content
  * @filename: filename
  * @text_content: char array to be written in the text file
  * Return: 1 on success -1 on error
  */
int create_file(const char *filename, char *text_content)
{
	int fd, str_len;
	
	str_len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);


	while (text_content[str_len])
		str_len++;

	if (text_content)
		write(fd, text_content, str_len);

	close(fd);

	return (1);
}
