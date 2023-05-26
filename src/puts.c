/*
 * E89 Pedagogical & Technical Lab
 * project:     puts
 * created on:  2023-05-26 - 12:41 +0200
 * 1st author:  NextimeSWX - nextime
 * description: puts.c
 */

#include "stu.h"

int stu_puts(const char *str)
{
    int ret;

    ret = write(1, str, stu_strlen(str));
    return (ret);
}
