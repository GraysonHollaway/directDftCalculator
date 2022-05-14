# taken from Lab 0 on carmen assignment 

# build an executable named mysh from shell.c
CCFLAGS=-g3 -std=gnu99 -pedantic -Wall -Werror=implicit-function-declaration ${CFLAGS}
LDFLAGS=

all: main.c
	gcc ${CCFLAGS} -g -o main main.c DFT.h DFT.c -lm${LDFLAGS}

clean:
	$(RM) main
