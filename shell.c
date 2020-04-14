#include "header.h"
/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	ssize_t read_bytes = 0, size_t buffer_size = 0;
	char *user_input = NULL, *arg[20];
	pid_t ch_pid = 0;
	int status = 0, input_count = 0, valid_exec = 0;

	_print_prompt("($) ", 4);
	read_bytes = getline(&user_input, &buffer_size, stdin);
	while (read_bytes != -1)
	{
		if (*user_input == '\n')
			free(user_input);
		else if (*user_input != '\n')
		{
			_parse_input(user_input, arg);
			valid_exec = _check_exec(arg[0]);
			if (valid_exec == 0)
			{
				ch_pid = fork();
				if (ch_pid == -1)
					printf("failed");
				else if (ch_pid == 0)
				{
					execve(arg[0], arg, environ);
					exit(0);
				}
				else
					wait(&status);
			}
			else if  (valid_exec != 0)
				_print_wrong_input(user_input, input_count);
			free(*arg);
		}
		user_input = NULL;
		input_count++;
		_print_prompt("($) ", 4);
		read_bytes = getline(&user_input, &buffer_size, stdin);
	}
	_putchar('\n');
	free(user_input);
	return (0);
}
