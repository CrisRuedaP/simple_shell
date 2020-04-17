#include "header.h"
/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	ssize_t read_bytes = 0;
	size_t buffer_size = 0;
	char *user_input = NULL, *arg[20];
	int input_count = 1, valid_command = 0;

	_print_prompt("$ ", 2);
	read_bytes = getline(&user_input, &buffer_size, stdin);
	while (read_bytes != -1)
	{
		if (*user_input == '\n')
			free(user_input);
		else if (*user_input != '\n')
		{
			_parse_input(user_input, arg);
			valid_command = _check_exec(arg[0]);
			if (valid_command == 0)
				_fork(arg);
			else if (valid_command != 0)
			{
				_print_wrong_input(user_input, input_count);
			}
			free(*arg);
		}
		user_input = NULL;
		input_count++;
		_print_prompt("$ ", 2);
		read_bytes = getline(&user_input, &buffer_size, stdin);
	}
	/*_putchar('\n');*/
	free(user_input);
	return (0);
}
