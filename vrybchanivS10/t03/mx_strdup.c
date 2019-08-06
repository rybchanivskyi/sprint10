#include "file_to_str.h"

char *mx_strdup(const char *str) {
    char *new;
    int len = mx_strlen(str);

    new = mx_strnew(len);
    if (new == NULL) {
        return NULL;
    }
    mx_strcpy(new, str);
    return new;
}
