default: clean
	g++ test.cpp -o test
	chmod a+x test

clean:
	rm test

