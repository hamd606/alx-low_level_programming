#include <stdio.h>
#include "main.h"

/**
  * append_text_to_file - appends text to a file
  * @filename: file name input
  * @text_content: text to be appended
  * Return: 1 oon success -1 otherwise
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, str_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	str_len = 0;

	while (text_context[str_len])
		str_len++;

	if (text_content)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
