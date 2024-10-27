# Target to compile the object file
AddDiff: AddDiff.o
	g++ AddDiff.o -o AddDiff.exe

# Target to compile the C++ program
AddDiff.o: AddDiff.cpp
	g++ -c AddDiff.cpp -o AddDiff.o

# Target to run the program (interactively)
run: AddDiff
	./AddDiff.exe

# Target to compile the object Test file
AddDiffTest: AddDiffTest.o
	g++ AddDiffTest.o -o AddDiffTest.exe

# Target to compile the C++ Test program
AddDiffTest.o: AddDiffTest.cpp
	g++ -c AddDiffTest.cpp -o AddDiffTest.o

# Target to run the Test program
test: AddDiffTest
	./AddDiffTest.exe

# Target to clean up compiled files
clean:
	rm -f AddDiff.o AddDiffTest.o AddDiff.exe AddDiffTest.exe