#include "file_to_str.h"
#include <stdio.h>
char *mx_file_to_str(const char *filename) {
    char *res =(char *)malloc(sizeof(char) * 2);
    res[0] = 0;
    int file = open(filename, O_RDONLY);
    if(file < 0) {
        return NULL;
    }
    return res;
}
int main() {
  printf("%s\n", mx_file_to_str("jfhdjgf"));
}
