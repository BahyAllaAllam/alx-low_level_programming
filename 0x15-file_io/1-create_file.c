#include "main.h"

/**
 * create_file - check the code
 * @filename: filename
 * @text_content: text_content
 *
 * Return: Always 0.
*/
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t len = 0, str_len = strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (str_len)
		len = write(f, text_content, str_len);
	close(f);
	return (len == str_len ? 1 : -1);
}
