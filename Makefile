CXX = g++

PREFIX = /usr/local/

BINDIR = $(PREFIX)/bin

INSTALL = install

TARGET = build

CXXFLAGS = -Iinclude 

SOURCES = main.cpp $(wildcard src/*cpp)

OUTPUT = nelva

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(OUTPUT)

$(INSTALL): $(TARGET)
	$(INSTALL) -d $(BINDIR)
	$(INSTALL) -m 755 $(OUTPUT) $(BINDIR)/
	rm -rf $(OUTPUT)

test: $(TARGET)
	clear
	./$(OUTPUT)
	rm -rf $(OUTPUT)

clean:
	rm -rf $(OUTPUT)

.PHONY: build install clean test
