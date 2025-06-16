# MakeFile to build Password Manager project

CC=g++
FLAGS=-Wextra -Wall -std=c++11

default: prog.exe

utils.o: utils.h utils.cpp
	$(CC) $(FLAGS) -c utils.cpp

account.o: account.cpp account.h
	$(CC) $(FLAGS) -c account.cpp

password-manager.o: utils.o account.o password-manager.cpp password-manager.h
	$(CC) $(FLAGS) -c password-manager.cpp

prog.exe: utils.o account.o password-manager.o prog.cpp
	$(CC) $(FLAGS) -o prog.exe prog.cpp utils.o account.o password-manager.o

test.exe: utils.o account.o password-manager.o prog.cpp
	$(CC) $(FLAGS) -o test.exe test.cpp utils.o account.o password-manager.o

clean:
	rm -f *.o prog.exe
