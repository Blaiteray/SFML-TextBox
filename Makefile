all: compile link clean

test: compile link run

compile:
	g++ -c main.cpp "src/textbox.cpp" -Wall

link:
	g++ main.o textbox.o -o main -lsfml-graphics -lsfml-window -lsfml-system

clean:
	del *.o

run:
	main.exe