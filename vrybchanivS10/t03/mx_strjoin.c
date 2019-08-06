#include <stdlib.h>

#include "file_to_str.h"

char *mx_strjoin(char const *s1, char const *s2) {
    char *res = NULL;
    int len = mx_strlen(s1) + mx_strlen(s2);

    if (!s1 && s2) {
        res = mx_strdup(s2);
    }
    else if (s1 && !s2) {
        res = mx_strdup(s1);
    }
    else {
        res = mx_strnew(len);
        mx_strcat(res, s1);
        mx_strcat(res, s2);
    }
    if (!res) {
        return NULL;
    }
    return res;
}
