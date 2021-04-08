all: compile link clean

test: compile link clean run

compile:
		g++ -c example.cpp "include/textbox.cpp" -Wall

link:
		g++ example.o textbox.o -o example -mwindows -lsfml-graphics -lsfml-window -lsfml-system

clean:
		del *.o

run:
		example.exe