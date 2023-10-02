#include "main.h"

/**
 * read_textfile - check the code
 * @filename: filename
 * @letters: letters
 *
 * Return: Always 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t len;
	char b[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	len = read(f, &b[0], letters);
	len = write(STDOUT_FILENO, &b[0], len);
	close(f);
	return (len);
}
