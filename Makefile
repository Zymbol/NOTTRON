CFLAGS = -I ./include
all: snake

snake: snake.cpp log.cpp
	g++ -I ./include snake.cpp log.cpp edgarB.cpp carterW.cpp zScholefield.cpp libggfonts.a -Wall -Wextra -lrt -lX11 -lGLU -lGL -pthread -lm -lopenal -lalut  -osnake

clean:
	rm -f snake
	rm -f *.o

