#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: filename
 * @text_content: text_content
 *
 * Return: Always 0.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t len = 0, str_len = strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (str_len)
		len = write(f, text_content, str_len);
	close(f);
	return (len == str_len ? 1 : -1);
}
