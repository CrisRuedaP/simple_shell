#include "header.h"

/**
* print_prompt - prints shell prompt for user
* @prompt: string to be printed
* @size: length of the prompt
*
* Return: 0 on success, -1 if not
*/

ssize_t print_prompt(const char *prompt, size_t size)
{
	int written_bytes = 0;
	
	written_bytes = write(STDOUT_FILENO, prompt, size);
	if (written_bytes == -1)
		return (-1);
	else
		return (0);	
}