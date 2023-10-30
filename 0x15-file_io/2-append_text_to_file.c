#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - Appends text to the end of a file
 *
 * @filename: file to append to
 * @text_content: string to append
 *
 * Return: 1 if success, -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fpd, The_resulting, con;

	if (filename == NULL)
		return (-1);

	fpd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (fpd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (con = 0; text_content[con] != '\0'; con++)
		{
		}

		The_resulting = write(fpd, text_content, con);
		if (The_resulting == -1)
		{
			close(fpd);
			return (-1);
		}
	}

	close(fpd);
	return (1);
}
