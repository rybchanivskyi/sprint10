#include <fcntl.h>

#include <stdlib.h>
#include "printerr.h"


int main(int argc, char const *argv[]) {
    if (argc != 2) {
        mx_printerr("usage: ./read_file [file_path]");
        return 0;
    }
    int file = open(argv[1], O_RDONLY);
    if (file < 0) {
        mx_printerr("error\n");
        return 0;
    }
    char s[128];
    int n = read (file ,  s, 128);
    while(n > 0) {
               mx_printstr(s);
               n = read (file ,  s, 128);
             }
    close(file);
    return 0;
}
