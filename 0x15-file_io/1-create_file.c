#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file tobe created
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int a;
	int file, fw;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_TRUNC | O_WRONLY | O_CREAT, 0600);
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
