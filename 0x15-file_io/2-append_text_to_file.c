#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: the NULL terminated string.
 * Return: 1 or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	register int _file, _write, t_len;

	t_len = 0;

	if (!(filename))
	{
		return (-1);
	}
	_file = open(filename, O_WRONLY, O_APPEND);
	if (_file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[t_len])
		{
			t_len++;
		}
		_write = write(_file, text_content, t_len);
		if (_write == -1)
		{
			return (-1);
		}
	}
	close(_file);
	return (1);
}
