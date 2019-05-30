prog : bindir src/main.cpp
	g++ -o bin/prog src/main.cpp

bindir :
	mkdir -p bin