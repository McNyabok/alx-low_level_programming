#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to file name.
 * @text_content: pointer string to add to file
 *
 * Return: -1 for NULL filename, file not exist, Otherwise  1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileIdentifier;
	int writtenData;
	int textLength = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (textLength = 0; text_content[textLength];)
			textLength++;
	}

	fileIdentifier = open(filename, O_WRONLY | O_APPEND);
	writtenData = write(fileIdentifier, text_content, textLength);

	if (fileIdentifier == -1 || writtenData == -1)
		return (-1);

	close(fileIdentifier);

	return (1);
}
