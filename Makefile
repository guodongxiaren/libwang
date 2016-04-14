LIB = libwang.so
OBJ = cgi_util.o url.o http_header.o
CC 	= g++
CFLAGS = -std=c++11

$(LIB): $(OBJ)
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -fPIC -c -o $@ $^

.PHONY: clean install
install:
	install -m 755 $(LIB) /usr/local/lib/
clean:
	rm -rf $(LIB) $(OBJ)
