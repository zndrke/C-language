CC = gcc
CFLAGS = -g -Wall
OBJS = main.o word_cnt.o 
TARGET = word_cnt 

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o word_cnt
