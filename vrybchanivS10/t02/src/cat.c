#include "cat.h"


int main(int argc, char const *argv[]) {
    if (argc == 1) {
        char buf[1];
        int n = read (0, buf, sizeof(buf));
        while(n > 0) {
            write(1,buf,sizeof(buf));
            n = read (0, buf, sizeof(buf));
        }
        exit(0);
    }

    int file = open(argv[1], O_RDONLY);

    if (file < 0) {
        mx_printerr("mx_cat: ");
        mx_printerr(argv[1]);
        mx_printerr(": ");
        mx_printerr(strerror(errno));
        mx_printerr("\n");
        exit(0);
        return 0;
    }
    char s[1];
    int n = read (file ,  s, sizeof(s));
    while(n > 0) {
        write(1,s,sizeof(s));
        n = read (file ,  s, sizeof(s));
    }
    close(file);
    exit(0);
    return 0;
}
