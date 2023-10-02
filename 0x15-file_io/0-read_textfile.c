#include "main.h"

/**
  * read_textfile - reads a text file and prints the letters
  * @filename: filename.
  * @letters: numbers of letters printed.
  *
  * Return: numbers of letters printed. return 0 if it fails
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t numberOfBytesRead, numberOfBytesWritten;
	char *buffer;

	if (!filename)
		return (0);

	file_des = open(filename, O_RDONLY);

	if (file_des == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	numberOfBytesRead = read(file_des, buffer, letters);
	numberOfBytesWritten = write(STDOUT_FILENO, buffer, numberOfBytesRead);

	close(file_des);

	free(buffer);

	return (numberOfBytesRead);
}
