#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name
 * text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int file, fw;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND, 06644);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (a = 0; text_content[a]; a++)
			;
		fw = write(file, text_content, a);
		if (fw == -1)
			return (-1);
	}
	close(file);
	return (1);
}
