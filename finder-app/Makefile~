##############################################################################
#
# Applications Makefile
#
##############################################################################

ifndef ECEA5305_PRJROOT
    $(error You must first source the BSP environment: "source bsp-env")
endif

include $(ECEA5305_PRJROOT)/build/cross_compile.mk

CURRDIR := $(shell echo "$$(pwd)")

TARGET = writer

OBJECTS = writer.o

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

writer.o: writer.c
	$(CC) $(CFLAGS) -c writer.c

.PHONY: clean distclean mrproper
clean distclean mrproper:
	-rm -f *.o
	-rm -f $(TARGET)
