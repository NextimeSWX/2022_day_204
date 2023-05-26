/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:48 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu.h
 */

#ifndef STU_H_
#define STU_H_

#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

void to_each_their_turn(char *str);
pid_t stu_system(char *str);
int stu_puts(const char *str);
unsigned int stu_strlen(const char *str);

#endif
