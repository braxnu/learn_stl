program_name = prime_ratio

default: clean
	g++ $(program_name).cpp -o $(program_name)
	chmod a+x $(program_name)

clean:
	rm -f $(program_name)

