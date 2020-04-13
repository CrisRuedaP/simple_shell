#include "header.h"

/**
 * main - entry point
 * 
 * Return: 0 for success
 */

int main(void)
{
	ssize_t read_bytes = 0; /**número de caracteres leídos y el salto de línea*/
	size_t MAX_BUFFER_SIZE;
	char *user_input = NULL;
	pid_t ch_pid = 0;
        char *argv[20];
        int status = 0;
        int input_count = 0;
        int valid_exec = 0;

        _print_prompt("$ ", 2);
        read_bytes = getline(&user_input, &MAX_BUFFER_SIZE, stdin);
        while (read_bytes != -1)
        {
                if (*user_input == '\n')
                        free(user_input);
                else if (*user_input != '\n')
                {
                        parse_input(user_input, argv);
                        valid_exec = _check_exec(argv[0]);
                        if (valid_exec == 0)
                        {
                                ch_pid = fork();
                                if (ch_pid == -1)
                                        print_error();
                                else if (ch_pid == 0)
                                {
                                        execve(argv[0], argv, environ);
                                        exit(1);
                                }
                                else
                                        wait(&status);
                        }
                        else if  (valid_exec != 0)
                                print_error(input_count, not_found);
                free(*argv);
                }
        user_input = NULL;
        input_count++;
        _print_prompt("$ ", 2);
        read_bytes = getline(&user_input, &MAX_BUFFER_SIZE, stdin);
        }
        _putchar('\n');
        free(user_input);
        return (0);
}
