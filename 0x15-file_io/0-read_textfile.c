#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: file to read
 * @letters: number of letters to read
 * Return: number of letters it could read and print
 * 0 if the file can not be opened or read, if filename is NULL
 * & if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *totalsize;
	ssize_t file, fread, fwrite;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	totalsize = malloc(sizeof(char) * letters);
	fread = read(file, totalsize, letters);
	fwrite = write(STDOUT_FILENO, totalsize, fread);

	free(totalsize);
	close(file);
	return (fwrite);
}


