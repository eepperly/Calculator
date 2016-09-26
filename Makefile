CXXFLAGS=-g

mtest : test.o token.o
	$(CXX) -o mtest test.o token.o

token.o : parsing/token.cpp parsing/token.h

test.o : test.cpp parsing/token.h
