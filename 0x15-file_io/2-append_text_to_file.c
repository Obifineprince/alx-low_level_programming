#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append text to
 * @text_content: NULL terminated string to add to the end of the file
 *
 * Return: 1 on success, -1 on failure
 * - If filename is NULL, return -1
 * - If text_content is NULL, do not add anything to the file.
 * - Do not create the file if it does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int apt;
	ssize_t len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
	return (-1);

	apt = open(filename, O_WRONLY | O_APPEND);
	if (apt == -1)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	bytes_written = write(apt, text_content, len);
	if (bytes_written == -1)
	return (-1);

	close(apt);
	return (1);
}
