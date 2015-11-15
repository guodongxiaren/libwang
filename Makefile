LIB = libwang.so
OBJ = cgi_util.o url.o
CC 	= g++

$(LIB): $(OBJ)
	$(CC) -fPIC -shared -o $@ $^

%.o: %.cpp
	$(CC) -fPIC -c -o $@ $^

.PHONY: clean install
install:
	install -m 755 $(LIB) /usr/local/lib/
clean:
	rm -rf $(LIB) $(OBJ)
