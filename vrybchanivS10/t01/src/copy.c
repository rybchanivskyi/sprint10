#include "copyfile.h"


int main(int argc, char const *argv[]) {
    if (argc != 3) {
        mx_printerr("usage: ./mx_cp [source_file] [target_file]\n");
        exit(0);
        return 0;
    }
    int file = open(argv[1], O_RDONLY);
    if (file < 0) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_printerr(": ");
        mx_printerr(strerror(errno));
        mx_printerr("\n");
        exit(0);
        return 0;
    }
    int file1 = open(argv[2],O_WRONLY);
    if (file1 < 0) {
        file1 = open(argv[2], O_CREAT | O_WRONLY) ;
    }

    char s[1];
    int n = read (file ,  s, sizeof(s));
    while(n > 0) {
        write(file1, s, sizeof(s));
        n = read(file,  s, sizeof(s));
    }
    close(file);
    close(file1);
    exit(0);
    return 0;
}
