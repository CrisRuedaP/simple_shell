#include "header.h"

/**
 * _fork - starts executes and terminates child process
 * @arg: array of arguments to execute
 *
 * Return: 0 for success or 1 if execution fails
 */

int _fork(char **arg)
{
	pid_t child_p = 0;
	int status = 0;
	int exe_stat = 0;

	child_p = fork();
	if (child_p == -1)
	{
		perror("failed fork");
		exit(EXIT_FAILURE);
	}
	else if (child_p == 0)
	{
		exe_stat = execve(arg[0], arg, environ);
		if (exe_stat == -1)
			perror("Error");
	}
	else
		wait(&status);
	return (0);
}
