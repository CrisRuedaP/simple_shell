#include "header.h"
/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	ssize_t read_bytes = 0;
	size_t buffer_size = 0;
	char *user_input = NULL, **arg = NULL;
	int input_count = 1, valid_command = 0;
	const char *white_sp = " ";

	if (isatty(STDIN_FILENO))
		_print_prompt("$ ", 2);
	read_bytes = getline(&user_input, &buffer_size, stdin);
	while (read_bytes != -1)
	{
		if (*user_input == '\n')
			free(user_input);
		else if (user_input != NULL)
		{	
			arg = _parse_input(user_input);
			if (**arg == *white_sp)
			{
				_free_d_ptr(arg);
				_putchar(2);
				exit(0);
			}

			valid_command = _check_exec(arg[0]);
			if (valid_command == 0)
				_fork(arg);
			else if (valid_command != 0)
				_print_wrong_input(user_input, input_count);
			_free_d_ptr(arg);
		}
		user_input = NULL;
		input_count++;
		if (isatty(STDIN_FILENO))
			_print_prompt("$ ", 2);
		read_bytes = getline(&user_input, &buffer_size, stdin);
	}
	/*_putchar('\n');*/
	free(user_input);
	return (0);
}