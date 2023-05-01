CC = gcc
CFLAGS = -Wno-implicit-function-declaration -g -MD
LFLAGS = -Ireadline
INC = -Iinclude

SRCS = $(wildcard src/*.c)

OBJS = $(patsubst src/%.c, obj/%.o, ${SRCS}) # change the file mode

.PHONY: depend clean all
DEPS := $(OBJS:.o=.d)

all: chat

-include $(DEPS)

chat: $(OBJS) # $@ means the current target $^ means all the dependency files
	@$(CC) $^ -o $@ $(LFLAGS) 
obj/%.o: src/%.c # $< means the first source file
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<
clean:
	@rm obj/*.o obj/*.d