#include "main.h"
/**
 * str_len - str_len
 * @s: s
 *
 * Return: int
*/
int str_len(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
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
	ssize_t len = 0, sttrlen = str_len(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (sttrlen)
		len = write(f, text_content, sttrlen);
	close(f);
	return (len == sttrlen ? 1 : -1);
}
