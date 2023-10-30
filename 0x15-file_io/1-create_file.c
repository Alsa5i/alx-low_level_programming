#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fpd, The_resulting, con;

	if (filename == NULL)
		return (-1);

	fpd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fpd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (con = 0; text_content[con] != '\0'; con++)
    
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
