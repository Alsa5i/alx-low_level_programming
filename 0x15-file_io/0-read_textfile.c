#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints
 *
 * @filename: file to read
 * @letters: letters to read and print
 *
 * Return: number of
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t bytes_read, bytes_written;
	char *Pointer_to_c;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	Pointer_to_c = malloc(letters);
	if (Pointer_to_c == NULL)
	{
		close(fp);
		return (0);
	}

	bytes_read = read(fp, Pointer_to_c, letters);
	close(fp);

	if (bytes_read == -1)
	{
		free(Pointer_to_c);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, Pointer_to_c, bytes_read);

	free(Pointer_to_c);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
