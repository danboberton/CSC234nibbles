# Makefile for Nibbles

nibbles: main.cpp Casino.cpp Nibbles.cpp
	gcc -o nibbles -Wall -g main.cpp Casino.cpp Nibbles.cpp

