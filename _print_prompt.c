#include "header.h"

/**
* _print_prompt - prints shell prompt for user
* @prompt: string to be printed
* @size: length of the prompt
*
* Return: 0 on success, -1 if not
*/

ssize_t _print_prompt(const char *prompt, size_t size)
{
	int written_bytes = 0;

	written_bytes = write(STDOUT_FILENO, prompt, size);
	if (written_bytes == -1)
		return (-1);
	else
		return (0);
}
/**
 * _putchar - prints a character
 * @c: char
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_count - counts the number of input_count when previous cmd has failed
 * @input_count: number of times the user has input a command
 *
 * Return: nothing
 */

void _print_count(int input_count)
{
	if (input_count / 10)
		_print_count(input_count / 10);
	_putchar(input_count % 10 + '0');
}

/**
 * _print_wrong_input - prints prompt after input of wrong command
 * @cmd: command input by the user
 * @input_count: number of times the user has input a command
 * Return: nothing
 */

void _print_wrong_input(char *cmd, int input_count)
{
	char *prompt = "$hsh";

	write(2, prompt, 4);
	write(2, ": ", 2);
	_print_count(input_count);
	write(2, ": ", 2);
	write(2, cmd, _strlen(cmd));
	write(2, ": command not found\n", 20);
}
