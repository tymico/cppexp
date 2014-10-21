CC 		= g++
CFLAGS 	= -o
PARAM	= -Wall -g
CUR		= .
SRC		= $(CUR)/src
SRCS	= $(SRC)/*.cpp
TARGET	= $(CUR)/bin/a
INC		= -I$(CUR)/include
LIBS	= -lstdc++

.PHONY: $(TARGET)
   all:$(TARGET)

$(TARGET): $(SRCS)
	$(CC) $^ $(CFLAGS) $@ $(PARAM) $(INC) $(LIBS)

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
