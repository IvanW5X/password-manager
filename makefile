# MakeFile to build Password Manager project

CC=g++
FLAGS=-Wextra -Werror -Wall -std=c++11

default: prog.exe

account.o: account.cpp account.h
	$(CC) $(FLAGS) -c account.cpp

password-manager.o: password-manager.cpp password-manager.h
	$(CC) $(FLAGS) -c password-manager.cpp

prog.exe: account.o password-manager.o prog.cpp
	$(CC) $(FLAGS) -o prog.exe prog.cpp account.o password-manager.o

clean:
	rm -f *.o prog.exe
