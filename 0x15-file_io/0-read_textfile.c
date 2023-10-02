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
	char buf[READ_BUF_SIZE * 8];

	f = open(filename, O_RDONLY);
	if (!filename && f == -1 && !letters)
		return (0);

	len = read(f, &buf[0], letters);
	len = write(STDOUT_FILENO, &buf[0], len);
	close(f);
	return (len);
}
