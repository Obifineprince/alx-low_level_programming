#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int cf, b_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	cf = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (cf == -1)
		return (-1);

	if (text_content != NULL)
	{
		b_written = write(cf, text_content, strlen(text_content));
		if (b_written == -1)
		{
			close(cf);
			return (-1);
		}
	}

	close(cf);

	return (1);
}
