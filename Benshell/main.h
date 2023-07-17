#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, const char *src);
int _strlen(char *s);
char *get_command();
int check_for_bin(char cmd[1024], char *av2);
void execute(char *av4[32]);
void env(void);
extern char **environ;
int change_directory(const char *path);

#endif
