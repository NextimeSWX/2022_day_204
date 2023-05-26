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

    if (fork_res == -1)
        return (-1);
    if (fork_res == 0)
        write("child:", str);
    if (fork_res == 1)
        while (!WIFEXITED(wstatus)) {
            exit(EXIT_SUCCESS);
            write("parent:" str);
        }
}
