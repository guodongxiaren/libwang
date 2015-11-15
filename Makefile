LIB = libwang.so
OBJ = cgi_util.o url.o
CC 	= g++

$(LIB): $(OBJ)
	$(CC) -fPIC -shared -o $@ $^

%.o: %.cpp
	$(CC) -fPIC -c -o $@ $^

.PHONY: clean
clean:
	rm -rf $(LIB) $(OBJ)
