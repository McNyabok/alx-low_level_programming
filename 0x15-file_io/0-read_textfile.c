#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads text file and  print to 0_stdo
 * @filename: file to read
 * @letters: number of letters in file
 * Return: number of bytes read and printed, 0 fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fileCont_holder;
	ssize_t fDescriptor;
	ssize_t writtenBytes;
	ssize_t readBytes;

	fDescriptor = open(filename, O_RDONLY);
	if (fDescriptor == -1)
		return (0);
	fileCont_holder = malloc(sizeof(char) * letters);
	readBytes = read(fDescriptor, fileCont_holder, letters);
	writtenBytes = write(STDOUT_FILENO, fileCont_holder, readBytes);

	free(fileCont_holder);
	close(fDescriptor);
	return (writtenBytes);
}
