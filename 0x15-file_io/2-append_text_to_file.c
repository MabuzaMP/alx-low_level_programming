#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added Info.
 * Return: 1 if file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int Noletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (Noletters = 0; text_content[Noletters]; Noletters++)
			;

		rwr = write(fd, text_content, Noletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
