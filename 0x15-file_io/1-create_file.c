#include "main.h"

/**
 * create_file - creates a file.
 * @filename: points to the file to create.
 * @text_content: points to text  to write on the file.
 *
 * Return: -1 on failure, else 1
 */
int create_file(const char *filename, char *text_content)
{
	int fDescriptor;
	int writtenBytes;
	int text_contLen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_contLen = 0; text_content[text_contLen];)
			text_contLen++;
	}

	fDescriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writtenBytes = write(fDescriptor, text_content, text_contLen);

	if (fDescriptor == -1 || writtenBytes == -1)
		return (-1);

	close(fDescriptor);

	return (1);
}
