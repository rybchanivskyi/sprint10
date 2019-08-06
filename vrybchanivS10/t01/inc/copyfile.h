#ifndef PRINTERR_H
#define PRINTERR_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printerr(const char *s);

#endif
