BIN=ut_cgi.out
ALL:$(BIN)

ut_cgi.out:
	g++ ut_cgi.cpp -I../cgi/ ../cgi/cgi_util.o -o $@
.PHONY:clean
clean:
	rm -rf $(BIN)
