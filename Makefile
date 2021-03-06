NAME=	nibbler

CXX=	g++ -g -Wall -Wextra -W -ldl

CC=	$(CXX)

OBJ=	src/main.o\
	src/Snake.o\
	src/Food.o\
	src/Collision.o\
	src/Game.o\
	src/Strategie.o\
	src/StratFact.o\

all:	$(NAME)

$(NAME): $(OBJ)
	 $(CXX) $^ -o $@
	g++ -shared -lsfml-graphics -lsfml-window -lsfml-system -o lib_nibbler_sfml.so ./sfml/src/Display.cpp ./sfml/src/Sound.cpp -fPIC

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	rm -f lib_nibbler_sfml.so

re:	fclean all