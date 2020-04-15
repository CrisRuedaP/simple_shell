#ifndef _HEADER_H
#define _HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <limits.h>
#include <sys/wait.h>
#include <string.h>

extern char **environ;
ssize_t _print_prompt(const char *prompt, size_t size);
int _parse_input(char *user_input, char **argv);
int _check_exec(const char *command);
int _putchar(char c);
void _print_count(int input_count);
void _print_wrong_input(char *cmd, int input_count);
int _strlen(const char *s);
char *_getenv(const char *name);
#endif
