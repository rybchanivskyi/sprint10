#include "printfile.h"


int main(int argc, char const *argv[]) {
    if (argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
        return 0;
    }
    int file = open(argv[1], O_RDONLY);
    if (file < 0) {
        mx_printerr("error\n");
        return 0;
    }
    char s[1];
    int n = read (file ,  s, sizeof(s));
    while(n > 0) {
               write(1,s,sizeof(s));
               n = read (file ,  s, sizeof(s));
             }
    close(file);
    return 0;
}
