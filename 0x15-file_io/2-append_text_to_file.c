#include "main.h"
/**
 * append_text_to_file - appends a text at the end of a fp.
 * @filename: name of file.
 * @text_content: content of our file.
 * Return: 1 - success, -1 error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0, fp;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[length] != '\0')
	{
		length++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
	{
		return (-1);
	}

	write(fp, text_content, length);
	return (1);
}
