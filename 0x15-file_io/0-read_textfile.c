#include "main.h"
#include <stddef.h>

/**
 * read_textfile -  reads a text file and prints it to
 *					the POSIX standard output.
 * @filename: file name
 * @letters: the index of letters it should read and print
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	register int _open, _read, _write;
	register char *buffersize;

	buffersize = malloc(sizeof(char)  * letters);

	if (!(buffersize))
	{
		free(buffersize);
		return (0);
	}
	if (!(filename))
	{
		return (0);
	}
	_open = open(filename, O_RDONLY);
	_read = read(_open, buffersize, letters);
	_write = write(STDOUT_FILENO, buffersize, _read);

	if (_open == -1 || _read == -1 || _write == -1 || !(_write == _read))
	{
		free(buffersize);
		return (0);
	}
	free(buffersize);
	close(_open);
	return (_write);
}
