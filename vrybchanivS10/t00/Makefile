NAME = read_file

SRCS = src/mx_printerr.c src/mx_strlen.c src/mx_printstr.c src/read.c
SRCSOB = mx_printerr.c mx_strlen.c mx_printstr.c read.c

INC = inc/printfile.h
INCOB = printfile.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INCOB)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)
reinstall: uninstall clean all
