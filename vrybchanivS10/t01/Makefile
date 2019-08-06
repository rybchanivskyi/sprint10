NAME = mx_cp

SRCS = src/mx_printerr.c src/mx_strlen.c src/mx_printstr.c src/copy.c
SRCSOB = mx_printerr.c mx_strlen.c mx_printstr.c copy.c

INC = inc/copyfile.h
INCOB = copyfile.h

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
