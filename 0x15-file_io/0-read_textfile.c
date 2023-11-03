#include "main.h"
/**
 * read_textfile - function that reads a text file and prints.
 * @filename: variable pointer.
 * @letters: size letters.
 * Description:function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it cloud read and print, 0 othewise.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, r, w;
	char *s;

	s = malloc(letters);
	if (!s)
	{
		return (0);
	}

	if (!filename)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(s);
		return (0);
	}

	r = read(file, s, letters);
	w = write(STDOUT_FILENO, s, r);

	close(file);
	return (w);
}
