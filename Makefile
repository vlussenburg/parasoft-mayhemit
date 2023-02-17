CC=gcc
INCLUDE_FLAGS=-I.
LINK_FLAGS=
DEBUG_FLAGS=
CFLAGS=-g

SRCS = mayhemit.c

OBJ = $(SRCS:.c=.o)

EXEC=mayhemit

.PHONY = clean all

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) $^ $(LINK_FLAGS) -o $@

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ) $(EXEC)
