/*
 * E89 Pedagogical & Technical Lab
 * project:     To each their turn
 * created on:  2023-05-26 - 09:48 +0200
 * 1st author:  evan.lebihan - evan.lebihan
 * description: to_each_their_turn.c
 */

#include "stu.h"

void to_each_their_turn(char *str)
{
    pid_t fork_res;
    int wstatus;

    fork_res = fork();
    if (fork_res == -1) {
        stu_puts("Error");
    }
    if (fork_res == 0) {
        stu_puts("child:");
        stu_puts(str);
        stu_puts(" \n");
    }
    else {
        fork_res = waitpid(fork_res, &wstatus, 0);
        stu_puts("parent:");
        stu_puts(str);
        stu_puts(" \n");
    }
}
