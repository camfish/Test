# Makefile test

TestCode: TestCode.o
	g++ -o TestCode.out TestCode.cpp
TestCode.o: TestCode.cpp TestCode.h
	g++ -c TestCode.cpp
clean:
	rm -f *.o

# End makefile test