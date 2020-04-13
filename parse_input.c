#include "header.h"

/**
* parse_input - parses input from the user and stores in an array
* @user_input: input from user
* @argv: array with arguments to execute
* Return: arguments count
*/

int parse_input(char *user_input, char **argv)
{
	int ac = 0;
	char *parameter, exec_name;
	char *temp = user_input;

	user_input = strtok(user_input, "\n\t\r");
	argv[ac] = exec_name; /*El comando, el primer argumento del input*/
	for (ac = 1; exec_name != NULL; ac++)
	{
		parameter = strtok(NULL, "\n\t\r");
		temp = parameter;
		argv[ac] = parameter;
	}
	argv[ac] = NULL;
	return (ac);
}
