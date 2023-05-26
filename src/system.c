/*
 * E89 Pedagogical & Technical Lab
 * project:     To each their turn
 * created on:  2023-05-26 - 09:48 +0200
 * 1st author:  evan.lebihan - evan.lebihan
 * description: to_each_their_turn.c
 */

#include "stu.h"

pid_t stu_system(char *str)
{
    pid_t fork_res;
    int wstatus;

    fork_res = fork();
    if (fork_res == -1) {
        stu_puts("Error");
        exit(EXIT_FAILURE);
    }
    if (fork_res == 0) {
        fork_res = execl("/bin/sh", "sh", "-c", str, NULL);
    }
    else {
        fork_res = waitpid(fork_res, &wstatus, 0);
    }
    if (WIFEXITED(wstatus)) {
        return (WEXITSTATUS(wstatus));
            }
    else {
        return (-1);
    }
}
