##############################################################################
#
# Applications Makefile
#
##############################################################################

TARGET = writer

OBJECTS = writer.o

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJECTS)
	gcc -g -Wall -o $(TARGET) $(OBJECTS)

writer.o: writer.c
	gcc -g -Wall -c writer.c

.PHONY: clean distclean mrproper
clean distclean mrproper:
	-rm -f *.o
	-rm -f $(TARGET)
