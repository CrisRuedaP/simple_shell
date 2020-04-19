#ifndef _HEADER_H
#define _HEADER_H
#define DELIMIT " \n\t\r\a"
#define WHITE_SP " "
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
char _parse_input(char *user_input, char **arg);
int _check_exec(char *command);
int _putchar(char c);
void _print_count(int input_count);
int _print_wrong_input(char *cmd, int input_count);
int _strlen(char *s);
char *_getenv(char *path);
int _strcmp(const char *s1, const char *s2);
int _c_path_array(void);
int _fork(char **arg);
char *_str_concat(char *s1, char *s2);
char *_strdup(char *str);
void _free_d_ptr(char **arg);

#endif
