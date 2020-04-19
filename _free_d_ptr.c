#include "header.h"

/**
* 
*
*/  

void _free_d_ptr(char **arg)
{
	int i = 0;

	while (arg[i] != NULL)
	{
		free(arg[i]);
		i++;
	}
	free(arg);
}
