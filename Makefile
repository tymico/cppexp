CC 		= g++
CFLAGS	= -Wall -g -Wno-delete-non-virtual-dtor
LFLAGS 	= -o
CUR		= .
SRC		= $(CUR)/src
SRCS	= $(SRC)/*.cpp
TARGET	= $(CUR)/bin/a
INC		= -I$(CUR)/include
LIBS	= -lstdc++

.PHONY: $(TARGET)
   all:$(TARGET)

$(TARGET): $(SRCS)
	$(CC) $^ $(LFLAGS) $@ $(CFLAGS) $(INC) $(LIBS)

create:
	@-mkdir src/
	@-mkdir include/
	@-mkdir bin/

.PHONY: clean
clean:
	@-rm -rf $(TARGET)
	@-rm -rf $(CUR)/include/*~
	@-rm -rf $(SRC)/*~
	@-rm -rf $(CUR)/*~
