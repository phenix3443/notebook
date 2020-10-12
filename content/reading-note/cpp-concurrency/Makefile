SOURCE := $(wildcard *.cc)
TARGET := $(SOURCE:%.cc=%.out)
CFLAGS := -g
CXXFLAGS := -std=c++11
INCLUDE_DIR :=
LIB_DIR :=
LIBS := -lpthread
CC := g++

all:$(TARGET)

$(TARGET):%.out:%.cc
	$(CC) $(CFLAGS) $(CXXFLAGS) $(INCLUDE_DIR) $(LIB_DIR) $< -o $@ $(LIBS)

clean:
	-rm $(TARGET)
