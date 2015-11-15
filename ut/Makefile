BIN 	= ut_cgi.out ut_url.out
CC 		= g++
CFLAGS 	= -I ../ -L ../ -lwang

ALL:$(BIN)

%.out: %.cpp 
	$(CC) $(CFLAGS) -o $@ $^

.PHONY:clean
clean:
	rm -rf $(BIN)
