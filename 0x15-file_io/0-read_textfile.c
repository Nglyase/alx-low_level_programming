#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints to standard output
 *@filename: the name of the fille
 * @letters: the actual number of letters to print
 *Return: number of letters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t bytwrite, bytread;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return(0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return(0);

	bytread = read(fd, buf, letters);
	bytwrite = write(STDOUT_FILENO, buf, bytread);

	close(fd);

	free(buf);
	return (bytwrite);
}
